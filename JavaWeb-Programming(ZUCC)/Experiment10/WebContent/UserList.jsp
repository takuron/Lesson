<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="top.takuron.lesson.javaweb.e10.*" import="java.util.ArrayList"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>用户展示</title>
</head>
<body>
	<%
		UsersDao ud = new UsersDao();
		ArrayList<User> list = ud.findAll();
		for(int i=0;i<list.size();i++){
			User u  = list.get(i);
			out.println("Id:"+u.getId()+" Name:"+u.getUsername()+" Email:"+u.getEmail()+"<br>");
		}
	%>
</body>
</html>