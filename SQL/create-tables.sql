CREATE TABLE employee (
    id INT PRIMARY KEY AUTOINCREMENT,
    first_name VARCHAR(255) NOT NULL,
    last_name VARCHAR(255) NOT NULL,

)

CREATE TABLE customer (
    id INT PRIMARY KEY AUTOINCREMENT,
    customer_name VARCHAR(255) NOT NULL,
    city_id INT,
    customer_address VARCHAR(255) ,
    next_call_date DATE ,
    ts_inserted DATETIME ,
    FOREIGN KEY (city_id) REFERENCES city(id),
)

CREATE TABLE call (
    id INT PRIMARY KEY AUTOINCREMENT,
    employee_id INT,
    customer_id INT,
    sttart_time DATETIME ,
    end_time DATETIME ,
    call_outcome_id INT,
    FOREIGN KEY (call_outcome_id) REFERENCES call_outcome(id),
    FOREIGN KEY (employee_id) REFERENCES employee(id),
    FOREIGN KEY (customer_id) REFERENCES customer(id),
)