package top.takuron.lessons.javaweb.e5;

import java.io.IOException;
import java.lang.reflect.Array;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.List;

import javax.servlet.ServletException;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class LastAccessServlet
 */
public class LastAccessServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

    /**
     * Default constructor. 
     */
    public LastAccessServlet() {
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		request.setCharacterEncoding("utf-8");
		response.setHeader("Content-type", "text/html;charset=utf-8");
		
		boolean flag = false;
		List<Cookie> cookies ;
		if(request.getCookies()!=null) {
			cookies=Arrays.asList(request.getCookies());
		}
		else {
			cookies = new ArrayList<Cookie>();
		}
		
		Date dNow = new Date( );
	    SimpleDateFormat ft = new SimpleDateFormat ("yyyy-MM-dd-hh:mm:ss");
	    Cookie time =new Cookie("lastAccess",ft.format(dNow));
	    time.setMaxAge(1800);
		response.addCookie(time);
		
		for (int i=0;i<cookies.size();i++) {
			if(cookies.get(i).getName().equals("lastAccess")) {
				response.getWriter().append("上一次访问时间为："+cookies.get(i).getValue());
				flag = true;
			}
		}

		if(!flag) {
			response.getWriter().append("这是第一次访问");
		}
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
