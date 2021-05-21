<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>登录</title>
</head>
<body style="text-align: center;">
	<form action="LoginServlet" method="post">
		<table border="1" width="600px" cellpadding="0" cellspacing="0" align="center" >
			<tr>
				<td height="30" align="center">用户名：</td>
				<td>&nbsp;&nbsp;<input type="text" name="userename" />${errerMsg }</td>
			</tr>
			<tr>
				<td height="30" align="center">密码：</td>
				<td>&nbsp;&nbsp;<input type="password" name="password" /></td>
			</tr>
			<tr>
				<td height="35" align="center">自动登录时间</td>
				<td> <input type="radio" name="autologin" value="${60*60*24*31 }"/>一个月
				 <input type="radio" name="autologin" value="${60*60*24*31*3 }"/>三个月
				 <input type="radio" name="autologin" value="${60*60*24*31*12 }"/>一年
				</td>
			</tr>
			<tr>
			 <td height="30" colspan="2" align="center">
			 	<input type="submit" value="登录"/>&nbsp;&nbsp;&nbsp;&nbsp;<input type="reset" value="重置"/>
			 </td>
			</tr>
		</table>
	</form>
</body>
</html>