SELECT given_name, family_name, mark FROM Enrolments INNER JOIN Students ON Students.student_id = Enrolments.student_id WHERE subject_code = 'COMP SCI 2000' AND mark < 50;