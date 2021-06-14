package top.takuron.lesson.javaweb.model;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import top.takuron.lesson.javaweb.database.*;

public class Key2ValueModel {
	private String key;
	private String value;
	
	public Key2ValueModel() {
		
	}
	
	public Key2ValueModel(String key,String defaultV) {
		this.key = key;
		this.value = defaultV;
		
		Connection conn = null;
		Statement stmt = null;
		ResultSet rs = null;
		try {
			conn = JDBCUtils.getConnection();
			stmt = conn.createStatement();
			String sql = "SELECT * FROM kv WHERE key='"+key+"';";
			rs = stmt.executeQuery(sql);
			while (rs.next()) {
				value = rs.getString("value");
			}
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			JDBCUtils.release(rs, stmt, conn);
		}
	}
	
	public boolean create() throws SQLException, ClassNotFoundException {
		Connection conn = null;
		Statement stmt = null;
		
		conn = JDBCUtils.getConnection();
		stmt = conn.createStatement();
		
		String sql = "INSERT INTO kv(key,value)"+
				"VALUES('"+key+"','"+value+"');";
		
		int num = stmt.executeUpdate(sql);
		if(num>0) {
			return true;
		}
		return false;
	}
	
	public boolean update() {
		
		Connection conn = null;
		Statement stmt = null;
		try {
			conn = JDBCUtils.getConnection();
			stmt = conn.createStatement();
			
			String sql = "UPDATE kv SET value='"+value+"' WHERE key='"+key+"';";
			
			int num = stmt.executeUpdate(sql);
			if (num > 0) {
				return true;
			}
			return false;
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			JDBCUtils.release(stmt, conn);
		}
		return false;
	}
	
	public boolean delete() {
		Connection conn = null;
		Statement stmt = null;
		try {
			conn = JDBCUtils.getConnection();
			stmt = conn.createStatement();
			
			String sql = "DELETE FROM kv WHERE key='" + key+"';";
			int num = stmt.executeUpdate(sql);
			if (num > 0) {
				return true;
			}
			return false;
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			JDBCUtils.release(stmt, conn);
		}
		return false;
	}
	
	public String getKey() {
		return key;
	}
	public void setKey(String key) {
		this.key = key;
	}
	public String getValue() {
		return value;
	}
	public void setValue(String value) {
		this.value = value;
	}
}
