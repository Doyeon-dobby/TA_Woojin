/* 초기 세팅 하는 과정에서 오류 날 때 처음으로 돌아가게 해주는 기능*/
git config --local --unset credential.helper
git config --global --unset credential.helper
git config --system --unset credential.helper

/* 위에꺼 안되면 밑에 것*/
 sudo git config --system --unset credential.helper
 
/* 현재 브랜치 확인 */ 
git push origin main
user name : github 이름
password : macbook 패스워드

/* push 잘 안될 때 */
git push origin main --force

(1)
/* github repo 주소 연동 */
git remote add origin '주소'
(2)
/*user e-mail,user-name 세팅*/
git config --global user.email "메일주소"
git config --global user.naem "github 이름"
