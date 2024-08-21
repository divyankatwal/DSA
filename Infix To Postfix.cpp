#include <bits/stdc++.h>

using namespace std;

struct stack {
    struct stack st;
    int size;
    int top;
    char * infix;
};

void push(struct stack * st, int x) {
    if (st - > top == st - > size - 1)
        cout << "Stack overflow" << endl;
    else {
        st - > top++;
        st - > s[st - > top] = x;
    }
}

void pop(struct stack * st) {
    int x = -1;
    if (st - > top == -1)
        cout << "Stack is Empty" << endl;
    else {
        x = st - > s[st - > top];
        st - > top--;
    }
    return x;
}

int isOperand(char x) {
    if (x == '+' || x == '-' || x == '*' || x == '/') return 0;
    else return 1;
}

void Display(struct stack st) {
    for (int i = st.top; i >= 0; i--)
        cout << st.s[i] << endl;
}

int pre(char x) {
    if (x == '+' || x == '-') return 1;
    else if (x == '*' || x == '/') return 2;
    return 0;
}
char * convert(char * infix) {

        char * postfix = new char[strlen(infix) + 1];
        int i = 0, j = 0;
        while (infix[i] != '\0') {
            if (isOperand(infix[i]))
                postfix[j++] = infix[i++];
            else {
                if (pre(infix[i]) > pre(stackTop(st)) push( & st, infix[i++]);
                    else
                        postfix[j++] == pop( & st);
                }
            }
            while (st.top != -1) {
                postfix[j++] == pop( & st);
            }
            postfix[j] = '\0';
            return postfix;
        }

        int main() {
            char *infix = "a+b*c-d/e";
            struct stack st;
            cin >> st.size;
            st.infix = new char[st.size];
            st.top = -1;
            char *postfix=convert(infix)
            cout << postfixt;
        }