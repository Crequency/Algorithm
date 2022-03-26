#include "Math.h"

namespace calg{
    EXTERN_API inline ll max(ll a, ll b){ return a > b ? a : b; }
    EXTERN_API inline ll min(ll a, ll b){ return a > b ? b : a; }
    EXTERN_API inline ll abs(ll x){ return x < 0 ? -x : x; }
    EXTERN_API inline ll pow(ll x, ll t){
        ll ans = 1; while (t--) ans *= x; return ans;
    }

    EXTERN_API inline ll gcd(ll a, ll b){
        if (a == b) return a;
        if (a < b){ ll tmp = a; a = b, b = tmp; }
        ll dis = max(a, b) - min(a, b);
        return gcd(dis, min(a, b));
    }
}