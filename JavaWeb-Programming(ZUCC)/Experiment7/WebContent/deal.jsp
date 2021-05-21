<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<% request.setCharacterEncoding("UTF-8");%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<h2>注册信息</h2>
	用户名：<c:out value="${param.username }">未知用户</c:out><br>
	密码：<c:out value="${param.password }">无</c:out><br>
	Email：<c:out value="${param.email }">未知邮箱</c:out><br>
	性别：<c:out value="${param.sex }">未知</c:out><br>
	爱好：<c:out value="${param.hobby }">未知</c:out><br>
	备注：<c:out value="${param.remarks }">无</c:out><br>
</body>
</html>