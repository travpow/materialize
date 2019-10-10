/*
Copyright 2019 Materialize, Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <mz-config.h>

const mz::Config& mz::defaultConfig() {
    static Config singleton {
        .expectedSources = {
            "mysql_tpcch_customer",
            "mysql_tpcch_history",
            "mysql_tpcch_district",
            "mysql_tpcch_neworder",
            "mysql_tpcch_order",
            "mysql_tpcch_orderline",
            "mysql_tpcch_warehouse",
            "mysql_tpcch_item",
            "mysql_tpcch_stock",
            "mysql_tpcch_nation",
            "mysql_tpcch_region",
            "mysql_tpcch_supplier"
        },
        .kafkaUrl = "kafka://kafka:9092",
        .materializedUrl = "postgresql://materialized:6875/?sslmode=disable",
        .schemaRegistryUrl = "http://schema-registry:8081",
        .viewPattern = "mysql.tpcch.%"
    };
    return singleton;
}
