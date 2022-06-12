package top.takuron.jstudy.petstore.presenter;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;
import org.hibernate.query.Query;
import top.takuron.jstudy.petstore.model.UserModel;
import top.takuron.jstudy.petstore.presenter.interfaces.ILoginPresenter;
import top.takuron.jstudy.petstore.view.LoginFrame;
import top.takuron.jstudy.petstore.view.ProductListFrame;
import top.takuron.jstudy.petstore.view.interfaces.ILoginFrame;

import java.util.List;

public class LoginPresenter implements ILoginPresenter {
    private ILoginFrame frame;

    @Override
    public void onLoginin(String userid, String password) {
        Configuration configuration = new Configuration().configure();
        SessionFactory sessionFactory = configuration.buildSessionFactory();
        Session session = sessionFactory.openSession();
        Transaction transaction = session.beginTransaction();

        Query query = session.createQuery("from UserModel where userid is '"+userid+"'");
        List<UserModel> resultList = query.getResultList();
        if(resultList.size()==0){
            frame.loginFail();
        }
        else if(resultList.get(0).getUserpassword().equals(password)){
            frame.loginSuccess();
            ProductListFrame form = new ProductListFrame();
            form.setVisible(true);
            frame.dismiss();
        }
        else{
            frame.loginFail();
        }
    }

    @Override
    public void start() {
        frame = new LoginFrame(this);
    }

    @Override
    public void onRegister(String id, String password) {
        Configuration configuration = new Configuration().configure();
        SessionFactory sessionFactory = configuration.buildSessionFactory();
        Session session = sessionFactory.openSession();
        Transaction transaction = session.beginTransaction();

        UserModel u = new UserModel();
        u.setUserid(id);
        u.setUserpassword(password);

        session.save(u);
        transaction.commit();
        session.close();
    }
}
