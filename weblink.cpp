// #include <iostream>
// #include <cppcms/service>
// #include <cppcms/applications_pool.h>
// #include <cppdb/frontend.h>
// #include <curl/curl.h>

// class SendInfoHandler : public cppcms::application {
// public:
//     SendInfoHandler(cppcms::service &srv) : cppcms::application(srv) {}

//     virtual void main(std::string url) {
//         // Handle the POST request
//         if (request().request_method() == "POST") {
//             // Send an email using libcurl
//             sendEmail();
//             // Redirect the user back to the main page
//             response().set_redirect_header("/");
//         }
//     }

// private:
//     void sendEmail() {
//         // Replace with your actual email information
//         std::string email = "your-email@example.com";
//         std::string subject = "User Clicked Link";
//         std::string body = "The user clicked on the link.";

//         // Prepare the email message
//         std::string message = "To: " + email + "\n"
//                              "Subject: " + subject + "\n\n"
//                              + body;

//         // Initialize libcurl
//         CURL *curl = curl_easy_init();
//         if (curl) {
//             curl_easy_setopt(curl, CURLOPT_URL, "smtp://smtp.example.com");
//             curl_easy_setopt(curl, CURLOPT_MAIL_FROM, "sender@example.com");
//             curl_easy_setopt(curl, CURLOPT_MAIL_RCPT, (std::string("<") + email + ">").c_str());
//             curl_easy_setopt(curl, CURLOPT_READFUNCTION, NULL);
//             curl_easy_setopt(curl, CURLOPT_READDATA, NULL);
//             curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);
//             curl_easy_setopt(curl, CURLOPT_INFILESIZE_LARGE, (curl_off_t)message.size());
//             curl_easy_setopt(curl, CURLOPT_READDATA, message.c_str());

//             // Perform the email sending
//             CURLcode res = curl_easy_perform(curl);
//             if (res != CURLE_OK) {
//                 std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
//             }

//             // Cleanup
//             curl_easy_cleanup(curl);
//         }
//     }
// };

// int main(int argc, char **argv) {
//     try {
//         cppcms::service srv(argc, argv);
//         srv.applications_pool().mount(cppcms::applications_factory<SendInfoHandler>());
//         srv.run();
//     } catch (std::exception const &e) {
//         std::cerr << e.what() << std::endl;
//     }
//     return 0;
// }