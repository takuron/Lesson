<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>发言板</title>
</head>
<body>
	<form action="ShowContent.jsp" method="post">
		用户名：<input type="text" name="username" /><br/>
		发言：<br/>
		<textarea name="message" rows="10" cols="20" ></textarea>
		<br/><input type = "submit" value = "提交" />
	</form>
</body>
</html>