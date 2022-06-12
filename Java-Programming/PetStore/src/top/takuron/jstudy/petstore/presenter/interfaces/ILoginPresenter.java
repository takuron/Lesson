package top.takuron.jstudy.petstore.presenter.interfaces;

public interface ILoginPresenter {
    public void onLoginin(String id,String password);
    public void start();
    public void onRegister(String id,String password);
}
