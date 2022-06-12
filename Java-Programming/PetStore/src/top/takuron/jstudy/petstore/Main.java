package top.takuron.jstudy.petstore;

import org.hibernate.HibernateException;
import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;
import top.takuron.jstudy.petstore.model.UserModel;
import top.takuron.jstudy.petstore.presenter.LoginPresenter;
import top.takuron.jstudy.petstore.presenter.interfaces.ILoginPresenter;
import top.takuron.jstudy.petstore.view.LoginFrame;
import top.takuron.jstudy.petstore.view.interfaces.ILoginFrame;

public class Main {
    public static void main(String[] args) throws HibernateException {
        test();

        ILoginPresenter pre = new LoginPresenter();
        pre.start();
    }

    private static void test(){
        UserModel u = new UserModel();
        u.setUserid("j2ee");
        u.setUserpassword("j2ee");

        Configuration configuration = new Configuration();
        configuration.configure();
        SessionFactory factory = configuration.buildSessionFactory();

        //得到Session对象
        Session session = factory.openSession();

        //使用Hibernate操作数据库，都要开启事务,得到事务对象
        Transaction transaction = session.getTransaction();
        //开启事务
        transaction.begin();
        //把对象添加到数据库中
        session.save(u);
        //提交事务
        transaction.commit();
        //关闭Session
        session.close();
    }
}
