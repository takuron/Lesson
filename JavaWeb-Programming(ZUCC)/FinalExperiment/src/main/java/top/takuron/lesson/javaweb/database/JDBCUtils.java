package top.takuron.lesson.javaweb.database;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class JDBCUtils {
	private static String classname = "com.mysql.jdbc.Driver";
	private static String url = "jdbc:mysql://localhost:3306";
	private static String database = "jrss";
	private static String username = "root";
	private static String password = "Tang0809";
	
	public static boolean initializationDB() {
		Statement stmt = null;
		Connection conn = null;
		try {
			Class.forName(classname);
			conn = DriverManager.getConnection(url,username,password);
			stmt = conn.createStatement();
			String sql = "CREATE DATABASE If Not Exists "+database+" Character Set UTF8;";
			int num = stmt.executeUpdate(sql);
			if(num>0) {
				return true;
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}finally {
			release(stmt,conn);
		}
		
		return false;
	}
	
	public static Connection getConnection() throws SQLException,ClassNotFoundException{
		Class.forName(classname);
		Connection conn = DriverManager.getConnection(url+"/"+database,username,password);
		return conn;
	}
	
	public static void release(Statement stmt,Connection conn) {
		if(stmt!=null) {
			try {
				stmt.close();
			}
			catch(SQLException e) {
				e.printStackTrace();
			}
		}
		if(conn!=null) {
			try {
				conn.close();
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
	
	public static void release(ResultSet rs,Statement stmt,Connection conn) {
		if(rs!=null) {
			try {
				rs.close();
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		release(stmt,conn);
	}
}

