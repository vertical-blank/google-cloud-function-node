
# Sql formatter on Google Cloud Function

## build & deploy

```bash
cd src
npm i
gcloud functions deploy format_sql_node --runtime nodejs8 --entry-point handler --trigger-http
```