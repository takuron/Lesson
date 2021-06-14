package top.takuron.lesson.e10;

import java.sql.SQLException;

public class Test {
	private static DBUtilsDao dao = new DBUtilsDao();
	public static void testInsert() throws SQLException{
		User u = new User();
		u.setUsername("test");
		u.setPassword("123456");
		u.setEmail("test@test.com");
		u.setId(2345);
		System.out.println(dao.insert(u));
	}
	
	public static void main(String[] args) throws SQLException{
		testInsert();
	}
}
