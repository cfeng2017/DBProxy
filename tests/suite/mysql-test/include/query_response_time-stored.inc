
FLUSH QUERY_RESPONSE_TIME;

CALL test_f(0.31);
CALL test_f(0.32);
CALL test_f(0.33);
CALL test_f(0.34);
CALL test_f(0.35);
CALL test_f(0.36);
CALL test_f(0.37);
CALL test_f(0.38);
CALL test_f(0.39);
CALL test_f(0.4);
CALL test_f(1.1);
CALL test_f(1.2);
CALL test_f(1.3);
CALL test_f(1.5);
CALL test_f(1.4);
CALL test_f(0.5);
CALL test_f(2.1);
CALL test_f(2.3);
CALL test_f(2.5);
CALL test_f(3.1);
CALL test_f(4.1);
CALL test_f(5.1);


SHOW GLOBAL VARIABLES where Variable_name like 'QUERY_RESPONSE_TIME_RANGE_BASE';
SHOW QUERY_RESPONSE_TIME;
SELECT * FROM INFORMATION_SCHEMA.QUERY_RESPONSE_TIME;

