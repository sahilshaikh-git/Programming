
import csv
import pprint

data = []

with open("latest.csv", "r", encoding="utf-8") as file:
    reader = csv.DictReader(file)

    for row in reader:

        # Only people, not brands or organizations
        if row["type"] != "person":
            continue

        followers = int(row["followers"])
        category = row["category"].strip()

        # Only accounts with 1M+ followers and a category
        if followers >= 1_000_000 and category:

            data.append({
                "name": row["name"],
                "category": category,
                "followers": round(followers / 1_000_000, 2)
            })

        if len(data) == 200:
            break

with open("instagram_data.py", "w", encoding="utf-8") as file:
    file.write("data = ")
    file.write(pprint.pformat(data, sort_dicts=False))

print("Total people:", len(data))
print("Dataset created!")
