USE computer_manager;

INSERT INTO studentinfo VALUES('31100001','张三','电子信息工程','tel:1777777777');
INSERT INTO studentinfo VALUES('31100001','李四',NULL,'tel:1777777777');

INSERT INTO studentpass VALUES('zhangsan','123456','31100001');
INSERT INTO studentpass VALUES('lisi','123456','31100002');

INSERT INTO computerinfo VALUES('00100001','E1-101','正常');
INSERT INTO computerinfo VALUES('00100001','E1-101','不正常');

INSERT INTO usehistory VALUES(0,'31100001','00100001','2020-06-03 10:04:04','2020-06-03 11:04:04',NULL,NULL);



