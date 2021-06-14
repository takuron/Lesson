DROP DATABASE  IF EXISTS factory_management;
CREATE DATABASE factory_management;
USE factory_management;

CREATE TABLE factory(
Fac_id VARCHAR(8) PRIMARY KEY,
Fac_manager VARCHAR(10) NOT NULL
);

CREATE TABLE workshop(
Wos_id VARCHAR(8) PRIMARY KEY,
Wos_manager VARCHAR(10) NOT NULL,
Wos_address VARCHAR(50) NOT NULL,
Wos_telephone VARCHAR(15) NOT NULL,
Fac_id VARCHAR(8) NOT NULL,
FOREIGN KEY (Fac_id) REFERENCES factory(Fac_id)
);

CREATE TABLE worker(
Wor_id VARCHAR(8) PRIMARY KEY,
Wor_name VARCHAR(10) NOT NULL,
Wor_type ENUM('打磨','组装','质检') DEFAULT '组装',
Wor_sex ENUM('男','女') DEFAULT '男',
Wor_age TINYINT NOT NULL,
Wos_id VARCHAR(8) NOT NULL,
FOREIGN KEY (Wos_id) REFERENCES workshop(Wos_id)
);

CREATE TABLE warehouse(
Wah_id VARCHAR(8) PRIMARY KEY,
War_manager VARCHAR(10) NOT NULL,
War_telephone VARCHAR(15) NOT NULL,
Fac_id VARCHAR(8) NOT NULL,
FOREIGN KEY (Fac_id) REFERENCES factory(Fac_id)
);

CREATE TABLE product(
Prd_id VARCHAR(8) PRIMARY KEY,
Prd_price INT NOT NULL
);

CREATE TABLE components(
Cop_id VARCHAR(8) PRIMARY KEY,
Cop_weight INT NOT NULL,
Cop_price INT NOT NULL
);

CREATE TABLE prd_assembly_wor(
Prd_id VARCHAR(8),
Wos_id VARCHAR(8),
FOREIGN KEY (Wos_id) REFERENCES workshop(Wos_id),
FOREIGN KEY (Prd_id) REFERENCES product(Prd_id)
);

CREATE TABLE cop_assembly_wor(
Cop_id VARCHAR(8),
Wos_id VARCHAR(8),
FOREIGN KEY (Wos_id) REFERENCES workshop(Wos_id),
FOREIGN KEY (Cop_id) REFERENCES components(Cop_id)
);

CREATE TABLE cop_assembly_prd(
Cop_id VARCHAR(8),
FOREIGN KEY (Cop_id) REFERENCES components(Cop_id),
Prd_id VARCHAR(8),
FOREIGN KEY (Prd_id) REFERENCES product(Prd_id)
);

CREATE TABLE prd_store(
Prd_id VARCHAR(8),
Wah_id VARCHAR(8),
FOREIGN KEY (Prd_id) REFERENCES product(Prd_id),
FOREIGN KEY (Wah_id) REFERENCES warehouse(Wah_id)
);


CREATE TABLE cop_store(
Cop_id VARCHAR(8),
Wah_id VARCHAR(8),
FOREIGN KEY (Cop_id) REFERENCES components(Cop_id),
FOREIGN KEY (Wah_id) REFERENCES warehouse(Wah_id)
);