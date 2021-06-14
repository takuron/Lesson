<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>注册</title>
</head>
<body>
	<h3>注册</h3>
	<form action="RegisterServlet" method="post">
		id：<input type="text" name="id"><br>
		用户名：<input type="text" name="username"><br>
		密码：<input type="password" name="password"><br>
		email：<input type="email" name="email"><br>
		
		<input type="submit" value="提交">
	</form>
</body>
</html>