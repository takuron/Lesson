<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="top.takuron.lesson.e9.*" import="java.util.*"%>
    
    <%
    	response.setHeader("refresh", "10;URL=reslut.jsp");
    %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>您好</title>
</head>
<body>
 	<h3>您好：<%=((User)(request.getSession().getAttribute("user"))).getUsername() %><a href="LoginOutServlet">注销</a></h3>
 	
 	当前在线用户：<br>
 	<%
 		List<User> users =  (List<User>)getServletContext().getAttribute("onlionUserList");
 		for(int i=0;i<users.size();i++){
 			out.println(users.get(i).getUsername()+"<br>");
 		}
 	%>
</body>
</html>