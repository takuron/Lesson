package top.takuron.lesson.e9;

import javax.servlet.ServletContextAttributeEvent;
import javax.servlet.ServletContextAttributeListener;
import javax.servlet.ServletRequestAttributeEvent;
import javax.servlet.ServletRequestAttributeListener;
import javax.servlet.http.HttpSessionAttributeListener;
import javax.servlet.http.HttpSessionBindingEvent;

/**
 * Application Lifecycle Listener implementation class MyAttributeListener
 *
 */
public class MyAttributeListener implements ServletContextAttributeListener, ServletRequestAttributeListener, HttpSessionAttributeListener {

    /**
     * Default constructor. 
     */
    public MyAttributeListener() {
        // TODO Auto-generated constructor stub
    }

	/**
     * @see ServletContextAttributeListener#attributeAdded(ServletContextAttributeEvent)
     */
    public void attributeAdded(ServletContextAttributeEvent arg0)  { 
         // TODO Auto-generated method stub
    	String name = arg0.getName();
    	System.out.println("ServletContext��ӣ�"+name+"="+arg0.getServletContext().getAttribute(name));
    }

	/**
     * @see ServletContextAttributeListener#attributeRemoved(ServletContextAttributeEvent)
     */
    public void attributeRemoved(ServletContextAttributeEvent arg0)  { 
         // TODO Auto-generated method stub
    	String name = arg0.getName();
    	System.out.println("ServletContext�Ƴ���"+name);
    }

	/**
     * @see ServletRequestAttributeListener#attributeRemoved(ServletRequestAttributeEvent)
     */
    public void attributeRemoved(ServletRequestAttributeEvent arg0)  { 
         // TODO Auto-generated method stub
    	String name = arg0.getName();
    	System.out.println("ServletRequest�Ƴ���"+name);
    }

	/**
     * @see ServletRequestAttributeListener#attributeAdded(ServletRequestAttributeEvent)
     */
    public void attributeAdded(ServletRequestAttributeEvent arg0)  { 
         // TODO Auto-generated method stub
    	String name = arg0.getName();
    	System.out.println("ServletRequest��ӣ�"+name+"="+arg0.getServletRequest().getAttribute(name));
    }

	/**
     * @see ServletRequestAttributeListener#attributeReplaced(ServletRequestAttributeEvent)
     */
    public void attributeReplaced(ServletRequestAttributeEvent arg0)  { 
         // TODO Auto-generated method stub
    	String name = arg0.getName();
    	System.out.println("ServletRequest�滻��"+name+"="+arg0.getServletRequest().getAttribute(name));
    }

	/**
     * @see HttpSessionAttributeListener#attributeAdded(HttpSessionBindingEvent)
     */
    public void attributeAdded(HttpSessionBindingEvent arg0)  { 
         // TODO Auto-generated method stub
    	String name = arg0.getName();
    	System.out.println("HttpSession��ӣ�"+name+"="+arg0.getSession().getAttribute(name));
    }

	/**
     * @see HttpSessionAttributeListener#attributeRemoved(HttpSessionBindingEvent)
     */
    public void attributeRemoved(HttpSessionBindingEvent arg0)  { 
         // TODO Auto-generated method stub
    	String name = arg0.getName();
    	System.out.println("HttpSession�Ƴ���"+name);
    }

	/**
     * @see HttpSessionAttributeListener#attributeReplaced(HttpSessionBindingEvent)
     */
    public void attributeReplaced(HttpSessionBindingEvent arg0)  { 
         // TODO Auto-generated method stub
    	String name = arg0.getName();
    	System.out.println("HttpSession�滻��"+name+"="+arg0.getSession().getAttribute(name));
    }

	/**
     * @see ServletContextAttributeListener#attributeReplaced(ServletContextAttributeEvent)
     */
    public void attributeReplaced(ServletContextAttributeEvent arg0)  { 
         // TODO Auto-generated method stub
    	String name = arg0.getName();
    	System.out.println("ServletContext�滻��"+name+"="+arg0.getServletContext().getAttribute(name));
    }
	
}
