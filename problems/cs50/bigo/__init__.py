import check50
import re


@check50.check()
def exists():
    """answers.txt exists"""
    check50.exists("answers.txt")


@check50.check(exists)
def answers():
    """answers all questions"""
    content = open("answers.txt", "r").read()
    if "TODO" in content:
        raise check50.Failure("Not all questions answered.")


@check50.check(answers)
def sorts():
    """correctly identifies each algorithmic complexity"""

    expected = [
        ("1.1", "n"),
        ("1.2", "n"),
        ("1.3", "log(n)"),
        ("1.4", "1"),
        ("1.5", "n^2"),
        ("1.6", "n^2"),
        ("1.7", "n"),
        ("1.8", "n*log(n)"),
        ("2.1", "n"),
        ("2.2", "n^2"),
        ("2.3", "n^2"),
        ("2.4", "n^2"),
        ("2.5", "1")
    ]

    student_answers = open("answers.txt", "r").read().lower().replace(" ", "")

    for question, answer in expected:
        question_regex = re.escape(question)
        answer_regex = re.escape(f"o({answer})")

        regex = f"{question_regex}.*{answer_regex}"

        if not re.search(regex, student_answers):
            if "^" in answer and re.search(question_regex + r".*\*", student_answers):
                help_msg = "Do be sure to check that you've written n*n as n^2"
            else:
                help_msg = ""

            raise check50.Failure(f"Incorrect algorithmic complexity for Question {question}", help=help_msg)


