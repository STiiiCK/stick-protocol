# Generated by Django 3.1.5 on 2021-06-30 09:14

from django.conf import settings
from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        migrations.swappable_dependency(settings.AUTH_USER_MODEL),
        ('stick_protocol', '0007_auto_20210625_1554'),
    ]

    operations = [
        migrations.RenameModel(
            old_name='DecryptingSenderKey',
            new_name='DecryptionSenderKey',
        ),
        migrations.RenameModel(
            old_name='EncryptingSenderKey',
            new_name='EncryptionSenderKey',
        ),
    ]
