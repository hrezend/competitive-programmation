//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
#define debug(x) cout << x << endl
#define sz(x) (int)x.size()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())

using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pii> vii;
typedef vector <vi> matriz;

struct Node {
    Node * l, * r;
    int maxV = 0, sz = 1, prior = rand(), v = 0;
    Node(){ }
    Node(int v_){ l = r = NULL; maxV = v = v_; }
} * root = NULL;

inline int getSz(Node * p){
    return (p ? p->sz : 0);
}

inline int getMax(Node * p){
    return (p ? p->maxV : 0);
}

void updateSz(Node * p){
    if(p){
        p->sz = getSz(p->l) + getSz(p->r) + 1;
        p->maxV = max({getMax(p->l), getMax(p->r), p->v});
    }
}

void split(Node * p, Node * &l, Node * &r, int pos){
    if(!p){
        l = r = NULL;
        return;
    }
    int posAtual = getSz(p->l) + 1;
    // pos eh menor q a desejada, vá pra direita
    if(posAtual <= pos){
        split(p->r, p->r, r, pos - posAtual);
        l = p;
    } else {
        split(p->l, l, p->l, pos);
        r = p;
    }
    updateSz(p);
}

void merge(Node * &p, Node * l, Node * r){
    if(!l or !r) p = l ? l : r;
    else if(l->prior > r->prior){
        merge(l->r, l->r, r);
        p = l;
    } else {
        merge(r->l, l, r->l);
        p = r;
    }
    updateSz(p);
}

void insert(int pos, int v){
    Node * l = NULL, * r = NULL, * aux = new Node(v);
    split(root, l, r, pos);
    merge(l, l, aux);
    merge(root, l, r);
    // debug(getSz(root));
}

int answer(Node * p, int add, int h){
    if(!p or getMax(p) <= h) return 0;
    if(getSz(p) == 1){
        // debug("sadas");
        // debug(getMax(p));
        // debug(add);
        return add + 1;
    }
    if(p->r && getMax(p->r) > h) return answer(p->r, add + getSz(p->l) + 1, h);
    else if(p->v > h) return getSz(p->l) + add + 1;
    return answer(p->l, add, h);
}

int query(int pos, int h){
    Node * l = NULL, * r = NULL;
    Node * l2 = NULL, * r2 = NULL;

    split(root, l, r, pos - 1);
    // debug(getMax(r));
    split(r, l2, r2, 1);
    // debug(getMax(l2));
    int res = answer(l, 0, h + getMax(l2));
    merge(r, l2, r2);
    merge(root, l, r);
    return res;
}
