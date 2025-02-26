# Utilizzare una subquery per trovare tutti i dipendenti che hanno completato più di 3 progetti. Prima trovare gli ID dei dipendenti che hanno completato più di 3 progetti, poi utilizzare questi ID per trovare i dettagli dei dipendenti.

from pymongo import MongoClient

def subquery_example():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    projects_collection = db['projects']
    employees_collection = db['employees']

    # Trovare gli ID dei dipendenti che hanno completato più di 3 progetti
    pipeline = [
        {"$group": {"_id": "$employee_id", "project_count": {"$sum": 1}}},
        {"$match": {"project_count": {"$gt": 3}}}
    ]
    result = projects_collection.aggregate(pipeline)
    employee_ids = [doc["_id"] for doc in result]

    # Utilizzare questi ID per trovare i dettagli dei dipendenti
    query = {"employee_id": {"$in": employee_ids}}
    employees = employees_collection.find(query)
    for employee in employees:
        print(employee)
    client.close()

subquery_example()