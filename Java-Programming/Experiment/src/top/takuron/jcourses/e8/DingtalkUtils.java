package top.takuron.jcourses.e8;

import com.alibaba.fastjson.JSONObject;
import okhttp3.*;

import java.io.IOException;

public class DingtalkUtils {
    public static void sendText(String webhook_url,String text){
        JSONObject requestJson = new JSONObject();
        requestJson.put("msgtype", "text");
        JSONObject context = new JSONObject();
        context.put("content",text);
        requestJson.put("text",context);

        RequestBody dingtalkRequest =  RequestBody.create(MediaType.parse("application/json; charset=utf-8"), requestJson.toJSONString());

        OkhttpUtils.post(webhook_url, dingtalkRequest, new Callback() {
            @Override
            public void onFailure(Call call, IOException e) {
                System.out.println("错误"+e.toString());
            }

            @Override
            public void onResponse(Call call, Response response) throws IOException {
                System.out.println(response.body().toString());
            }
        });
    }
}
