package top.takuron.lessons.javaweb.e5;

import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.image.BufferedImage;
import java.io.ByteArrayOutputStream;
import java.io.IOException;

import javax.imageio.ImageIO;
import javax.servlet.ServletException;
import javax.servlet.ServletOutputStream;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class CheckServlet
 */
public class CheckServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
	
	private static int WIDTH = 60;
	private static int HEIGHT = 20;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public CheckServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		HttpSession session = request.getSession();
		response.setContentType("image/jpeg");
		ServletOutputStream sos = response.getOutputStream();
		response.setHeader("Pragma", "No-cache");
		response.setHeader("Catch-Control", "no-cache");
		response.setDateHeader("Expires", 0);
		
		BufferedImage img = new BufferedImage(WIDTH,HEIGHT,BufferedImage.TYPE_INT_BGR);
		
		Graphics g = img.getGraphics();
		char[] rands = generateCheckCode();
		
		drawBackGround(g);
		drawRands(g,rands);
		g.dispose();
		
		ByteArrayOutputStream bos = new ByteArrayOutputStream();
		ImageIO.write(img,"JPEG",bos);
		
		byte [] buf = bos.toByteArray();
		response.setContentLength(buf.length);
		bos.writeTo(sos);
		bos.close();
		sos.close();
		session.setAttribute("checkcode", new String(rands));
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}
	
	private char[] generateCheckCode() {
		String chars = "0123456789qwertyuiopasdfghjklzxcvbnm";
		char[] rands = new char[4];
		for(int i=0;i<4;i++) {
			int rand = (int)(Math.random()*chars.length());
			rands[i] = chars.charAt(rand);
		}
		return rands;
	}
	
	private void drawBackGround(Graphics g) {
		g.setColor(new Color(0XDCDCDC));
		g.fillRect(0, 0, WIDTH, HEIGHT);
		for(int i=0;i<120;i++) {
			int x = (int) (Math.random()*WIDTH);
			int y = (int) (Math.random()*HEIGHT);
			int r = (int) (Math.random()*255);
			int gr = (int) (Math.random()*255);
			int b = (int) (Math.random()*255);
			
			g.setColor(new Color(r,gr,b));
			g.drawOval(x, y, 1, 0);
		}
	}
	
	private void drawRands(Graphics g,char[] rands) {
		g.setColor(Color.BLACK);
		g.setFont(new Font(null,Font.ITALIC|Font.BOLD,18));
		
		g.drawString(""+rands[0], 1, 17);
		g.drawString(""+rands[1], 16, 15);
		g.drawString(""+rands[2], 31, 18);
		g.drawString(""+rands[3], 46, 16);
		
		System.out.println(rands);
	}

}
