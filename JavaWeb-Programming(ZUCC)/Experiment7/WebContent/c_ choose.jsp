<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<c:choose>
    	<c:when test="${param.score>=90}">
        	成绩为优秀
    	</c:when>
    	<c:when test="${param.score>=70}">
        	成绩为良好
    	</c:when>
    	<c:when test="${param.score>=60}">
        	成绩为及格
    	</c:when>
    	<c:when test="${param.score<=60}">
        	成绩为不及格
    	</c:when>
    	<c:otherwise>
        	表达式都不正确时执行的主体内容
    	</c:otherwise>
	</c:choose>
</body>
</html>