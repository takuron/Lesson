<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.*"%>
<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>foreach1</title>
</head>
<body>
<% String[] fruits = {"apple","orange","grape","banana"}; %>

String数组元素：<br>
<c:forEach var="name" items="<%=fruits %>">
	${name }<br />
</c:forEach>

<% 
	Map user = new HashMap();
	user.put("Tom", "123");
	user.put("Make", "123");
	user.put("Lina", "123");
%>

HashMap元素：<br>
<c:forEach var="entry" items="<%=user %>">
	${entry.key }:${entry.value }<br />
</c:forEach>

</body>
</html>