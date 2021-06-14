package top.takuron.lesson.e10;

import java.sql.SQLException;
import java.util.List;

import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanHandler;
import org.apache.commons.dbutils.handlers.BeanListHandler;

public class DBUtilsDao {
	public List findALL() throws SQLException{
		QueryRunner runner = new QueryRunner(C3p0Utils.getDataSource());
		String sql = "select * from user";
		List list = (List) runner.query(sql, new BeanListHandler(User.class));
		return list;
	}
	
	public User find(int id) throws SQLException {
		QueryRunner runner = new QueryRunner(C3p0Utils.getDataSource());
		String sql = "select * from user where id=?";
		User u = (User) runner.query(sql, new BeanHandler(User.class),new Object[] {id});
		return null;
	}
	
	public Boolean insert(User user) throws SQLException {
		QueryRunner runner = new QueryRunner(C3p0Utils.getDataSource());
		String sql="insert into user (username,password) values(?,?)";
		int num = runner.update(sql,new Object[] {user.getUsername(),user.getPassword()});
		if(num>0) return true;
		return false;
	}
	
	public Boolean update(User u) throws SQLException{
		QueryRunner runner = new QueryRunner(C3p0Utils.getDataSource());
		String sql = "update user set username=?,password=? where id=?";
		int num = runner.update(sql,new Object[] {u.getUsername(),u.getPassword(),u.getId()});
		if(num>0) {
			return true;
		}
		return false;
	}
	
	public Boolean delete(int id) throws SQLException {
		QueryRunner runner = new QueryRunner(C3p0Utils.getDataSource());
		String sql = "delete from user where id=?";
		int num = runner.update(sql,id);
		if(num>0) {
			return true;
		}
		return false;
	}
}
