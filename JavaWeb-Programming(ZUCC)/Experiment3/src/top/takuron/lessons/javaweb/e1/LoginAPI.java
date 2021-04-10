package top.takuron.lessons.javaweb.e1;

import java.io.IOException;
import java.io.InputStream;
import java.util.Properties;

import javax.servlet.ServletConfig;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class LoginAPI
 */
public class LoginAPI extends HttpServlet {
	private static final long serialVersionUID = 1L;

    /**
     * Default constructor. 
     */
    public LoginAPI() {
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//ServletConfig conf = this.getServletConfig();
		ServletContext context = this.getServletContext();
//		String name = (String)context.getAttribute("username");
		InputStream ips = context.getResourceAsStream("/WEB-INF/admins/root.properties");
		Properties pros = new Properties();
		pros.load(ips);
		
//		response.getWriter().append("Adderess is: ").append(conf.getInitParameter("address"));
//		response.getWriter().append("Company is: ").append(context.getInitParameter("companyName"));
		response.getWriter().append("Password: ").append(pros.getProperty("Password"));
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
