<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.*"%>
<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<% 
		List l =new ArrayList(); 
		l.add("rea");
		l.add("yellow");
		l.add("blue");
		l.add("green");
		l.add("black");
	%>
	<c:forEach var="color" items="<%= l %>" begin ="1" end="3" step="2">
		${color }<br>
	</c:forEach>
</body>
</html>