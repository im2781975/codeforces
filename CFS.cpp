using namespace std;
//problem/369/A_given n dishes, where each dish requires either a bowl or a plate 
//have a limited number of bowls and plates.determine how many dishes cannot be served due to a lack of resources.
int main(){
    int n, bowl, plate; cin >> n >> bowl >> plate;
    int arr[n + 5], b = 0, p = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(arr[i] == 1)
            b++;
        else if(arr[i] == 2)
            p++;
    }
    int res = 0, ans = 0;
    if(bowl >= b) bowl -= b;
    else{
        ans = b - bowl;
        bowl = 0;
    }
    if(plate >= p) res = 0;
    else{
        p -= plate;
        if(bowl > 0){
            if(bowl >= p){
                bowl -= p; res = 0;
            }
            else res = p - bowl;
        }
        else res = p
    }
    cout << ans + res;
}
