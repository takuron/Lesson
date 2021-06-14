<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" %>
    
<%
	String user=request.getParameter("username");
	String msg=request.getParameter("message");
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>发言成功</title>
</head>
<body>
	<h1>发言成功</h1>
	用户名：<%=user %><br/>
	发言：<%=msg %>
</body>
</html>