package top.takuron.jcourses.e8;


import com.alibaba.fastjson.JSONObject;
import com.alibaba.fastjson.support.jaxrs.FastJsonAutoDiscoverable;
import okhttp3.*;

import java.io.IOException;

public class Experiment8 {
    private static String webhook_url = "https://oapi.dingtalk.com/robot/send?access_token=哒咩";
    private static String keyword = "【奇怪の测试】";

    public static void main(String[] args) {


        Thread listener = new Thread(){
            @Override
            public void run(){
                while (true){
                    OkhttpUtils.get("https://hq.sinajs.cn/list=sz002351", "https://finance.sina.com.cn", new Callback() {
                        @Override
                        public void onFailure(Call call, IOException e) {
                            System.out.println(e.toString());
                        }

                        @Override
                        public void onResponse(Call call, Response response) throws IOException {
                            //System.out.println(response.body().string());
                            String info =response.body().string().split("\"")[1];//取引号内内容
                            String name = info.split(",")[0];
                            double startP = Double.parseDouble(info.split(",")[1]);//获取开盘价
                            double nowP = Double.parseDouble(info.split(",")[3]);//获取当前价

                            if(nowP/startP>=1.05){
                                DingtalkUtils.sendText(webhook_url,keyword+name+"   上涨超出5%，请注意，当前价格："+nowP);
                            }
                            else if(nowP/startP<=0.95){
                                DingtalkUtils.sendText(webhook_url,keyword+name+"   下跌超出5%，请注意，当前价格："+nowP);
                            }
                            else{
                                DingtalkUtils.sendText(webhook_url,keyword+name+"   状态正常，当前价格："+nowP);
                            }

                        }
                    });

                    try {
                        this.sleep(5*60*1000);
                    } catch (InterruptedException e) {

                    }
                }

            }
        };
        listener.run();

        while(true);
    }
}
