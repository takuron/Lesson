<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>注册</title>
</head>
<body style="text-align: center;">
	<form action="deal.jsp" method="post">
		<table border="1" width="600px" cellpadding="0" cellspacing="0" align="center" >
			<tr>
				<td height="30" align="center">用户名：</td>
				<td>&nbsp;&nbsp;<input type="text" name="username" />${errerMsg }</td>
			</tr>
			<tr>
				<td height="30" align="center">密码：</td>
				<td>&nbsp;&nbsp;<input type="password" name="password" /></td>
			</tr>
			<tr>
				<td height="30" align="center">Email：</td>
				<td>&nbsp;&nbsp;<input type="email" name="email" /> </td>
			</tr>
			<tr>
				<td height="35" align="center">性别</td>
				<td> <input type="radio" name="sex" value="男"/>男
				 <input type="radio" name="sex" value="女"/>女
				</td>
			</tr>
			<tr>
				<td height="35" align="center">爱好</td>
				<td> <input type="checkbox" name="hobby" value="打篮球"/>打篮球
				 <input type="checkbox" name="hobby" value="踢足球"/>踢足球
				 <input type="checkbox" name="hobby" value="打羽毛球"/>打羽毛球
				</td>
			</tr>
			<tr>
				<td height="30" align="center">备注：</td>
				<td>&nbsp;&nbsp;<input type="text" name="remarks" />${errerMsg }</td>
			</tr>
			<tr>
			 <td height="30" colspan="2" align="center">
			 	<input type="submit" value="注册"/>&nbsp;&nbsp;&nbsp;&nbsp;<input type="reset" value="重置"/>
			 </td>
			</tr>
		</table>
	</form>
</body>
</html>