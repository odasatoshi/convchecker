// this is automatically generated template header please implement and edit.
#pragma once
#include <jubatus/framework.hpp>
#include "convchecker_types.hpp"

using namespace jubatus::framework;

namespace jubatus { namespace server { // do not change
class convchecker_serv : public server_base // do not change
{
public:
  convchecker_serv(const server_argv& a,
                   const jubatus::common::cshared_ptr<jubatus::common::lock_service>& zk); // do not change
  virtual ~convchecker_serv(); // do not change

  mixer::mixer* get_mixer() const {
    return mixer_.get();
  }

  bool set_config(const config_data& c); //update broadcast

  config_data get_config() const; //analysis random

  std::string query(const datum& query); //update random

  std::string bulk_query(const std::vector<datum >& query); //update random

  bool save(const std::string& id); //update broadcast

  bool load(const std::string& id); //update broadcast

  void get_status(status_t& status) const; //analysis broadcast
  void after_load();

private:
  pfi::lang::scoped_ptr<framework::mixer::mixer> mixer_;
  void check_set_config()const;
  config_data config_;
  pfi::lang::shared_ptr<fv_converter::datum_to_fv_converter> converter_;
};
}} // namespace jubatus::server
