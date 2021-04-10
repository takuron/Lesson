package top.takuron.lessons.javaweb.e1;

import java.io.IOException;

import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class Count
 */
public class Count extends HttpServlet {
	/* ��ʹ��iframe���ñ�ҳ��ҳ����ʵ��ͳ�ƹ��� */
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Count() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		ServletContext context = this.getServletContext();
		
		Integer Icount = (Integer)context.getAttribute("count");
		int count;
		if(Icount==null) {
			count = 1;
		}
		else {
			count = Icount.intValue()+1;
		}
		
		context.setAttribute("count", new Integer(count));
		response.getWriter().append("��ҳ���ѱ�����").append(""+count).append("��");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
