# Generated by Django 3.1.5 on 2021-06-25 11:54

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('stick_protocol', '0006_auto_20210625_1532'),
    ]

    operations = [
        migrations.AlterModelOptions(
            name='party',
            options={'ordering': ['timestamp']},
        ),
    ]
