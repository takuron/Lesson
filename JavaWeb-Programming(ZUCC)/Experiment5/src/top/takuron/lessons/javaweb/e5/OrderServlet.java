package top.takuron.lessons.javaweb.e5;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

import javax.servlet.ServletException;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import top.takuron.lessons.javaweb.db.BookDB;
import top.takuron.lessons.javaweb.javabean.Book;

/**
 * Servlet implementation class OrderServlet
 */
public class OrderServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public OrderServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		String id = request.getParameter("id");
		if(id==null) {
			response.sendRedirect("PurchaseServlet");
			return;
		}
		HttpSession sio = request.getSession();
		List<Book> cart = (List) sio.getAttribute("cart");
		if(cart==null) {
			cart = new ArrayList<Book>();
			sio.setAttribute("cart", cart);
		}
		cart.add(BookDB.getBook(id));
		Cookie cookie = new Cookie("JSESSIONID",sio.getId());
		cookie.setMaxAge(1800);
		response.addCookie(cookie);
		response.sendRedirect("CartServlet");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
