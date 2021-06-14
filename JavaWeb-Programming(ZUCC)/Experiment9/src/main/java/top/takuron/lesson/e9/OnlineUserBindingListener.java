package top.takuron.lesson.e9;

import java.util.ArrayList;
import java.util.List;

import javax.servlet.ServletContext;
import javax.servlet.http.HttpSession;
import javax.servlet.http.HttpSessionBindingEvent;
import javax.servlet.http.HttpSessionBindingListener;

/**
 * Application Lifecycle Listener implementation class OnlineUserBindingListener
 *
 */
public class OnlineUserBindingListener implements HttpSessionBindingListener {
	
	private User user;

    /**
     * Default constructor. 
     */
    public OnlineUserBindingListener() {
        // TODO Auto-generated constructor stub
    }
    
    public OnlineUserBindingListener(User u) {
    	this.user = u;
        // TODO Auto-generated constructor stub
    }

	/**
     * @see HttpSessionBindingListener#valueBound(HttpSessionBindingEvent)
     */
    public void valueBound(HttpSessionBindingEvent arg0)  { 
         // TODO Auto-generated method stub
    	HttpSession session = arg0.getSession();
    	ServletContext context = session.getServletContext();
    	
    	List<User> users = (List<User>)context.getAttribute("onlionUserList");
    	
    	if(users==null) {
    		users = new ArrayList<User>();
    		context.setAttribute("onlionUserList", users);
    	}
    	
    	users.add(user);
    	System.out.println(user.getUsername()+"µÇÂ½ÍøÕ¾");
    	
    }

	/**
     * @see HttpSessionBindingListener#valueUnbound(HttpSessionBindingEvent)
     */
    public void valueUnbound(HttpSessionBindingEvent arg0)  { 
         // TODO Auto-generated method stub
    	HttpSession session = arg0.getSession();
    	ServletContext context = session.getServletContext();
    	
    	List<User> users = (List<User>)context.getAttribute("onlionUserList");
    	users.remove(user);
    	System.out.println(user.getUsername()+"µÇ³öÍøÕ¾");
    }
	
}
