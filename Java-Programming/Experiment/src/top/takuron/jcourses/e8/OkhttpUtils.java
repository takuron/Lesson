package top.takuron.jcourses.e8;

import okhttp3.*;

import java.io.IOException;

public class OkhttpUtils {
    public static void get(String url, Callback callback){
        OkHttpClient client = new OkHttpClient();

        Request request = new Request.Builder()
                .get()
                .url(url)
                .build();

        Call call = client.newCall(request);

        call.enqueue(callback);
    }

    public static void get(String url,String refererUrl, Callback callback){
        OkHttpClient client = new OkHttpClient();

        Request request = new Request.Builder()
                .get()
                .addHeader("Referer",refererUrl)
                .url(url)
                .build();

        Call call = client.newCall(request);
        call.enqueue(callback);
    }

    public static void post(String url,RequestBody body, Callback callback){
        OkHttpClient client = new OkHttpClient();

        Request request = new Request.Builder()
                .url(url)
                .post(body)
                .build();

        Call call = client.newCall(request);
        call.enqueue(callback);
    }
}
