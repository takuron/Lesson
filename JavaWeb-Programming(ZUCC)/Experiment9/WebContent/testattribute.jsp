<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>测试</title>
</head>
<body>
	<h3>本页面用于测试对象属性监听</h3>
	<%
		getServletContext().setAttribute("username", "itcast");
		getServletContext().setAttribute("username", "itheima");
		getServletContext().removeAttribute("username");
		
		session.setAttribute("username", "itcast");
		session.setAttribute("username", "itheima");
		session.removeAttribute("username");
		
		request.setAttribute("username", "itcast");
		request.setAttribute("username", "itheima");
		request.removeAttribute("username");
	%>
</body>
</html>