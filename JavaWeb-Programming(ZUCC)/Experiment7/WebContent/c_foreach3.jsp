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
		List user = new ArrayList();
		user.add("Tom");
		user.add("Make");
		user.add("Lina");
	%>
	
	<table border="1">
		<tr>
			<td>序号</td>
			<td>索引</td>
			<td>是否为第一个元素</td>
			<td>是否为最后一个元素</td>
			<td>元素的值</td>
		</tr>
		<c:forEach var="name" items="<%=user %>" varStatus="status">
			<tr>
				<td>${status.count}</td>
				<td>${status.index}</td>
				<td>${status.first}</td>
				<td>${status.last}</td>
				<td>${name}</td>
			</tr>
		</c:forEach>
	</table>
</body>
</html>