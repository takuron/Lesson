package top.takuron.lessons.javaweb.db;

import java.util.*;

import top.takuron.lessons.javaweb.javabean.Book;

public class BookDB {
	public static Map<String,Book> books(){
		Map<String,Book> books = new LinkedHashMap<String,Book>();
		books.put("1",new Book("1","javaweb开发"));
		books.put("2",new Book("2","java开发"));
		books.put("3",new Book("3","jdbc开发"));
		return books;
	}
	
	public static Collection<Book> getAll(){
		return books().values();
	}
	public static Book getBook(String id) {
		return books().get(id);
	}
}
