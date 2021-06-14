package top.takuron.lesson.javaweb.e10;

import java.util.Date;

public class Test {
	public static void main(String[] args) {
		UsersDao ud = new UsersDao();
		User u = new User();
		u.setId(5);
		u.setUsername("test");
		u.setPassword("test");
		u.setEmail("test@test.com");
		u.setBirthday(new Date());
		if(ud.insert(u)) {
			System.out.println("sucess");
		}
	}
}
