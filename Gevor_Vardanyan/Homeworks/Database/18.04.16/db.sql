Create database HDM;
Use HDM;
Create table user (id int not null auto_increment, username varchar(20) not null, email varchar(35) not null, password varchar(256) not null, primary key(id), key indexEmail (email), unique key (email));
Create table field (field_id int not null auto_increment, opt_field varchar(55) not null, primary key(field_id));
Create table account (opt_id int not null auto_increment, u_id int not null, f_id int not null, f_value varchar(255) not null, primary key(opt_id), foreign key(u_id) references user(id), foreign key(f_id) references field(field_id), unique key (u_id, f_id));
Create table receipt (id int not null auto_increment, time datetime not null, market varchar(50) not null, sum int not null, date date not null, img varchar(255), u_id int not null, primary key(id), foreign key(u_id) references user(id), key indexTime (time, market), unique key (img));
Insert into field(field_id, opt_field) values (1, 'surname'), (2, 'birthday'), (3, 'image');
Create view fullInfo AS select user.id as id, user.username as name, user.email as email, user.password as pass, field.opt_field as field, account.f_value as val from ((account join user) join field) where ((account.u_id=user.id) and (account.f_id=field.field_id));


-- Insert into user(id, username, email, password) values (1, 'Dorian', 'dy@.com', 'dorianyates');
-- Insert into account(u_id, f_id, f_value) values (1, 3, 'imgYates'), (1, 2, '19.04.1962');
-- Insert into user(id, username, email, password) values (2, 'Ed', 'ed@.com', 'edcoan');
-- Insert into account(u_id, f_id, f_value) values (2, 1, 'Coan'), (2, 2, '23.03.1959');

-- Select u_id, f_id, f_value from account;
-- Select * from account;

-- Create view userFieldView AS select user.id as u_id, field.field_id as f_id, account.f_value as f_val from ((account join user) join field) where ((account.u_id=user.id) and (account.f_id=field.field_id));
-- Select * from userFieldView;