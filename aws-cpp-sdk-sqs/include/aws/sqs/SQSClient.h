/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sqs/model/ChangeMessageVisibilityBatchResult.h>
#include <aws/sqs/model/CreateQueueResult.h>
#include <aws/sqs/model/DeleteMessageBatchResult.h>
#include <aws/sqs/model/GetQueueAttributesResult.h>
#include <aws/sqs/model/GetQueueUrlResult.h>
#include <aws/sqs/model/ListDeadLetterSourceQueuesResult.h>
#include <aws/sqs/model/ListQueuesResult.h>
#include <aws/sqs/model/ReceiveMessageResult.h>
#include <aws/sqs/model/SendMessageResult.h>
#include <aws/sqs/model/SendMessageBatchResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace SQS
{

namespace Model
{
        class AddPermissionRequest;
        class ChangeMessageVisibilityRequest;
        class ChangeMessageVisibilityBatchRequest;
        class CreateQueueRequest;
        class DeleteMessageRequest;
        class DeleteMessageBatchRequest;
        class DeleteQueueRequest;
        class GetQueueAttributesRequest;
        class GetQueueUrlRequest;
        class ListDeadLetterSourceQueuesRequest;
        class ListQueuesRequest;
        class PurgeQueueRequest;
        class ReceiveMessageRequest;
        class RemovePermissionRequest;
        class SendMessageRequest;
        class SendMessageBatchRequest;
        class SetQueueAttributesRequest;

        typedef Utils::Outcome<NoResult, Client::AWSError<SQSErrors>> AddPermissionOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SQSErrors>> ChangeMessageVisibilityOutcome;
        typedef Utils::Outcome<ChangeMessageVisibilityBatchResult, Client::AWSError<SQSErrors>> ChangeMessageVisibilityBatchOutcome;
        typedef Utils::Outcome<CreateQueueResult, Client::AWSError<SQSErrors>> CreateQueueOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SQSErrors>> DeleteMessageOutcome;
        typedef Utils::Outcome<DeleteMessageBatchResult, Client::AWSError<SQSErrors>> DeleteMessageBatchOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SQSErrors>> DeleteQueueOutcome;
        typedef Utils::Outcome<GetQueueAttributesResult, Client::AWSError<SQSErrors>> GetQueueAttributesOutcome;
        typedef Utils::Outcome<GetQueueUrlResult, Client::AWSError<SQSErrors>> GetQueueUrlOutcome;
        typedef Utils::Outcome<ListDeadLetterSourceQueuesResult, Client::AWSError<SQSErrors>> ListDeadLetterSourceQueuesOutcome;
        typedef Utils::Outcome<ListQueuesResult, Client::AWSError<SQSErrors>> ListQueuesOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SQSErrors>> PurgeQueueOutcome;
        typedef Utils::Outcome<ReceiveMessageResult, Client::AWSError<SQSErrors>> ReceiveMessageOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SQSErrors>> RemovePermissionOutcome;
        typedef Utils::Outcome<SendMessageResult, Client::AWSError<SQSErrors>> SendMessageOutcome;
        typedef Utils::Outcome<SendMessageBatchResult, Client::AWSError<SQSErrors>> SendMessageBatchOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SQSErrors>> SetQueueAttributesOutcome;

        typedef std::future<AddPermissionOutcome> AddPermissionOutcomeCallable;
        typedef std::future<ChangeMessageVisibilityOutcome> ChangeMessageVisibilityOutcomeCallable;
        typedef std::future<ChangeMessageVisibilityBatchOutcome> ChangeMessageVisibilityBatchOutcomeCallable;
        typedef std::future<CreateQueueOutcome> CreateQueueOutcomeCallable;
        typedef std::future<DeleteMessageOutcome> DeleteMessageOutcomeCallable;
        typedef std::future<DeleteMessageBatchOutcome> DeleteMessageBatchOutcomeCallable;
        typedef std::future<DeleteQueueOutcome> DeleteQueueOutcomeCallable;
        typedef std::future<GetQueueAttributesOutcome> GetQueueAttributesOutcomeCallable;
        typedef std::future<GetQueueUrlOutcome> GetQueueUrlOutcomeCallable;
        typedef std::future<ListDeadLetterSourceQueuesOutcome> ListDeadLetterSourceQueuesOutcomeCallable;
        typedef std::future<ListQueuesOutcome> ListQueuesOutcomeCallable;
        typedef std::future<PurgeQueueOutcome> PurgeQueueOutcomeCallable;
        typedef std::future<ReceiveMessageOutcome> ReceiveMessageOutcomeCallable;
        typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
        typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
        typedef std::future<SendMessageBatchOutcome> SendMessageBatchOutcomeCallable;
        typedef std::future<SetQueueAttributesOutcome> SetQueueAttributesOutcomeCallable;
} // namespace Model

  class SQSClient;

    typedef std::function<void(const SQSClient*, const Model::AddPermissionRequest&, const Model::AddPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddPermissionResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::ChangeMessageVisibilityRequest&, const Model::ChangeMessageVisibilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangeMessageVisibilityResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::ChangeMessageVisibilityBatchRequest&, const Model::ChangeMessageVisibilityBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangeMessageVisibilityBatchResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::CreateQueueRequest&, const Model::CreateQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQueueResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::DeleteMessageRequest&, const Model::DeleteMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMessageResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::DeleteMessageBatchRequest&, const Model::DeleteMessageBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMessageBatchResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::DeleteQueueRequest&, const Model::DeleteQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueueResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::GetQueueAttributesRequest&, const Model::GetQueueAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueueAttributesResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::GetQueueUrlRequest&, const Model::GetQueueUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueueUrlResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::ListDeadLetterSourceQueuesRequest&, const Model::ListDeadLetterSourceQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeadLetterSourceQueuesResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::ListQueuesRequest&, const Model::ListQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueuesResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::PurgeQueueRequest&, const Model::PurgeQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurgeQueueResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::ReceiveMessageRequest&, const Model::ReceiveMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReceiveMessageResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::SendMessageRequest&, const Model::SendMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendMessageResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::SendMessageBatchRequest&, const Model::SendMessageBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendMessageBatchResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::SetQueueAttributesRequest&, const Model::SetQueueAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetQueueAttributesResponseReceivedHandler;

  /*
    <p>Welcome to the <i>Amazon Simple Queue Service API Reference</i>. This section describes who should read this guide, how the guide is organized, and other resources related to the Amazon Simple Queue Service (Amazon SQS).</p> <p>Amazon SQS offers reliable and scalable hosted queues for storing messages as they travel between computers. By using Amazon SQS, you can move data between distributed components of your applications that perform different tasks without losing messages or requiring each component to be always available.</p> <p>Helpful Links: <ul> <li><a href="http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl">Current WSDL (2012-11-05)</a></li> <li><a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/MakingRequestsArticle.html">Making API Requests</a></li> <li><a href="http://aws.amazon.com/sqs/">Amazon SQS product page</a></li> <li><a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html">Using Amazon SQS Message Attributes</a></li> <li><a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using Amazon SQS Dead Letter Queues</a></li> <li><a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#sqs_region">Regions and Endpoints</a></li> </ul> </p> <p>We also provide SDKs that enable you to access Amazon SQS from your preferred programming language. The SDKs contain functionality that automatically takes care of tasks such as:</p> <p> <ul> <li>Cryptographically signing your service requests</li> <li>Retrying requests</li> <li>Handling error responses</li> </ul> </p> <p>For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>.</p>
  */
  class AWS_SQS_API SQSClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

        /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SQSClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SQSClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SQSClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
            const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

        ~SQSClient();
        /*
            <p>Adds a permission to a queue for a specific <a href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>. This allows for sharing access to the queue.</p> <p>When you create a queue, you have full control access rights for the queue. Only you (as owner of the queue) can grant or deny permissions to the queue. For more information about these permissions, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html">Shared Queues</a> in the <i>Amazon SQS Developer Guide</i>.</p> <note> <p><code>AddPermission</code> writes an Amazon SQS-generated policy. If you want to write your own policy, use <a>SetQueueAttributes</a> to upload your policy. For more information about writing your own policy, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AccessPolicyLanguage.html">Using The Access Policy Language</a> in the <i>Amazon SQS Developer Guide</i>.</p> </note> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>
        */
        Model::AddPermissionOutcome AddPermission(const Model::AddPermissionRequest& request) const;

        /*
            <p>Adds a permission to a queue for a specific <a href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>. This allows for sharing access to the queue.</p> <p>When you create a queue, you have full control access rights for the queue. Only you (as owner of the queue) can grant or deny permissions to the queue. For more information about these permissions, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html">Shared Queues</a> in the <i>Amazon SQS Developer Guide</i>.</p> <note> <p><code>AddPermission</code> writes an Amazon SQS-generated policy. If you want to write your own policy, use <a>SetQueueAttributes</a> to upload your policy. For more information about writing your own policy, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AccessPolicyLanguage.html">Using The Access Policy Language</a> in the <i>Amazon SQS Developer Guide</i>.</p> </note> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::AddPermissionOutcomeCallable AddPermissionCallable(const Model::AddPermissionRequest& request) const;

        /*
            <p>Adds a permission to a queue for a specific <a href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>. This allows for sharing access to the queue.</p> <p>When you create a queue, you have full control access rights for the queue. Only you (as owner of the queue) can grant or deny permissions to the queue. For more information about these permissions, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html">Shared Queues</a> in the <i>Amazon SQS Developer Guide</i>.</p> <note> <p><code>AddPermission</code> writes an Amazon SQS-generated policy. If you want to write your own policy, use <a>SetQueueAttributes</a> to upload your policy. For more information about writing your own policy, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AccessPolicyLanguage.html">Using The Access Policy Language</a> in the <i>Amazon SQS Developer Guide</i>.</p> </note> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void AddPermissionAsync(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Changes the visibility timeout of a specified message in a queue to a new value. The maximum allowed timeout value you can set the value to is 12 hours. This means you can't extend the timeout of a message in an existing queue to more than a total visibility timeout of 12 hours. (For more information visibility timeout, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility Timeout</a> in the <i>Amazon SQS Developer Guide</i>.)</p> <p>For example, let's say you have a message and its default message visibility timeout is 30 minutes. You could call <code>ChangeMessageVisiblity</code> with a value of two hours and the effective timeout would be two hours and 30 minutes. When that time comes near you could again extend the time out by calling ChangeMessageVisiblity, but this time the maximum allowed timeout would be 9 hours and 30 minutes.</p> <note><p>There is a 120,000 limit for the number of inflight messages per queue. Messages are inflight after they have been received from the queue by a consuming component, but have not yet been deleted from the queue. If you reach the 120,000 limit, you will receive an OverLimit error message from Amazon SQS. To help avoid reaching the limit, you should delete the messages from the queue after they have been processed. You can also increase the number of queues you use to process the messages. </p></note> <important>If you attempt to set the <code>VisibilityTimeout</code> to an amount more than the maximum time left, Amazon SQS returns an error. It will not automatically recalculate and increase the timeout to the maximum time remaining.</important> <important>Unlike with a queue, when you change the visibility timeout for a specific message, that timeout value is applied immediately but is not saved in memory for that message. If you don't delete a message after it is received, the visibility timeout for the message the next time it is received reverts to the original timeout value, not the value you set with the <code>ChangeMessageVisibility</code> action.</important>
        */
        Model::ChangeMessageVisibilityOutcome ChangeMessageVisibility(const Model::ChangeMessageVisibilityRequest& request) const;

        /*
            <p>Changes the visibility timeout of a specified message in a queue to a new value. The maximum allowed timeout value you can set the value to is 12 hours. This means you can't extend the timeout of a message in an existing queue to more than a total visibility timeout of 12 hours. (For more information visibility timeout, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility Timeout</a> in the <i>Amazon SQS Developer Guide</i>.)</p> <p>For example, let's say you have a message and its default message visibility timeout is 30 minutes. You could call <code>ChangeMessageVisiblity</code> with a value of two hours and the effective timeout would be two hours and 30 minutes. When that time comes near you could again extend the time out by calling ChangeMessageVisiblity, but this time the maximum allowed timeout would be 9 hours and 30 minutes.</p> <note><p>There is a 120,000 limit for the number of inflight messages per queue. Messages are inflight after they have been received from the queue by a consuming component, but have not yet been deleted from the queue. If you reach the 120,000 limit, you will receive an OverLimit error message from Amazon SQS. To help avoid reaching the limit, you should delete the messages from the queue after they have been processed. You can also increase the number of queues you use to process the messages. </p></note> <important>If you attempt to set the <code>VisibilityTimeout</code> to an amount more than the maximum time left, Amazon SQS returns an error. It will not automatically recalculate and increase the timeout to the maximum time remaining.</important> <important>Unlike with a queue, when you change the visibility timeout for a specific message, that timeout value is applied immediately but is not saved in memory for that message. If you don't delete a message after it is received, the visibility timeout for the message the next time it is received reverts to the original timeout value, not the value you set with the <code>ChangeMessageVisibility</code> action.</important>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ChangeMessageVisibilityOutcomeCallable ChangeMessageVisibilityCallable(const Model::ChangeMessageVisibilityRequest& request) const;

        /*
            <p>Changes the visibility timeout of a specified message in a queue to a new value. The maximum allowed timeout value you can set the value to is 12 hours. This means you can't extend the timeout of a message in an existing queue to more than a total visibility timeout of 12 hours. (For more information visibility timeout, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility Timeout</a> in the <i>Amazon SQS Developer Guide</i>.)</p> <p>For example, let's say you have a message and its default message visibility timeout is 30 minutes. You could call <code>ChangeMessageVisiblity</code> with a value of two hours and the effective timeout would be two hours and 30 minutes. When that time comes near you could again extend the time out by calling ChangeMessageVisiblity, but this time the maximum allowed timeout would be 9 hours and 30 minutes.</p> <note><p>There is a 120,000 limit for the number of inflight messages per queue. Messages are inflight after they have been received from the queue by a consuming component, but have not yet been deleted from the queue. If you reach the 120,000 limit, you will receive an OverLimit error message from Amazon SQS. To help avoid reaching the limit, you should delete the messages from the queue after they have been processed. You can also increase the number of queues you use to process the messages. </p></note> <important>If you attempt to set the <code>VisibilityTimeout</code> to an amount more than the maximum time left, Amazon SQS returns an error. It will not automatically recalculate and increase the timeout to the maximum time remaining.</important> <important>Unlike with a queue, when you change the visibility timeout for a specific message, that timeout value is applied immediately but is not saved in memory for that message. If you don't delete a message after it is received, the visibility timeout for the message the next time it is received reverts to the original timeout value, not the value you set with the <code>ChangeMessageVisibility</code> action.</important>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ChangeMessageVisibilityAsync(const Model::ChangeMessageVisibilityRequest& request, const ChangeMessageVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Changes the visibility timeout of multiple messages. This is a batch version of <a>ChangeMessageVisibility</a>. The result of the action on each message is reported individually in the response. You can send up to 10 <a>ChangeMessageVisibility</a> requests with each <code>ChangeMessageVisibilityBatch</code> action.</p> <important>Because the batch request can result in a combination of successful and unsuccessful actions, you should check for batch errors even when the call returns an HTTP status code of 200.</important> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>
        */
        Model::ChangeMessageVisibilityBatchOutcome ChangeMessageVisibilityBatch(const Model::ChangeMessageVisibilityBatchRequest& request) const;

        /*
            <p>Changes the visibility timeout of multiple messages. This is a batch version of <a>ChangeMessageVisibility</a>. The result of the action on each message is reported individually in the response. You can send up to 10 <a>ChangeMessageVisibility</a> requests with each <code>ChangeMessageVisibilityBatch</code> action.</p> <important>Because the batch request can result in a combination of successful and unsuccessful actions, you should check for batch errors even when the call returns an HTTP status code of 200.</important> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ChangeMessageVisibilityBatchOutcomeCallable ChangeMessageVisibilityBatchCallable(const Model::ChangeMessageVisibilityBatchRequest& request) const;

        /*
            <p>Changes the visibility timeout of multiple messages. This is a batch version of <a>ChangeMessageVisibility</a>. The result of the action on each message is reported individually in the response. You can send up to 10 <a>ChangeMessageVisibility</a> requests with each <code>ChangeMessageVisibilityBatch</code> action.</p> <important>Because the batch request can result in a combination of successful and unsuccessful actions, you should check for batch errors even when the call returns an HTTP status code of 200.</important> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ChangeMessageVisibilityBatchAsync(const Model::ChangeMessageVisibilityBatchRequest& request, const ChangeMessageVisibilityBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates a new queue, or returns the URL of an existing one. When you request <code>CreateQueue</code>, you provide a name for the queue. To successfully create a new queue, you must provide a name that is unique within the scope of your own queues.</p> <note> <p>If you delete a queue, you must wait at least 60 seconds before creating a queue with the same name.</p> </note> <p>You may pass one or more attributes in the request. If you do not provide a value for any attribute, the queue will have the default value for that attribute. Permitted attributes are the same that can be set using <a>SetQueueAttributes</a>.</p> <note><p>Use <a>GetQueueUrl</a> to get a queue's URL. <a>GetQueueUrl</a> requires only the <code>QueueName</code> parameter.</p></note> <p>If you provide the name of an existing queue, along with the exact names and values of all the queue's attributes, <code>CreateQueue</code> returns the queue URL for the existing queue. If the queue name, attribute names, or attribute values do not match an existing queue, <code>CreateQueue</code> returns an error.</p> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>
        */
        Model::CreateQueueOutcome CreateQueue(const Model::CreateQueueRequest& request) const;

        /*
            <p>Creates a new queue, or returns the URL of an existing one. When you request <code>CreateQueue</code>, you provide a name for the queue. To successfully create a new queue, you must provide a name that is unique within the scope of your own queues.</p> <note> <p>If you delete a queue, you must wait at least 60 seconds before creating a queue with the same name.</p> </note> <p>You may pass one or more attributes in the request. If you do not provide a value for any attribute, the queue will have the default value for that attribute. Permitted attributes are the same that can be set using <a>SetQueueAttributes</a>.</p> <note><p>Use <a>GetQueueUrl</a> to get a queue's URL. <a>GetQueueUrl</a> requires only the <code>QueueName</code> parameter.</p></note> <p>If you provide the name of an existing queue, along with the exact names and values of all the queue's attributes, <code>CreateQueue</code> returns the queue URL for the existing queue. If the queue name, attribute names, or attribute values do not match an existing queue, <code>CreateQueue</code> returns an error.</p> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateQueueOutcomeCallable CreateQueueCallable(const Model::CreateQueueRequest& request) const;

        /*
            <p>Creates a new queue, or returns the URL of an existing one. When you request <code>CreateQueue</code>, you provide a name for the queue. To successfully create a new queue, you must provide a name that is unique within the scope of your own queues.</p> <note> <p>If you delete a queue, you must wait at least 60 seconds before creating a queue with the same name.</p> </note> <p>You may pass one or more attributes in the request. If you do not provide a value for any attribute, the queue will have the default value for that attribute. Permitted attributes are the same that can be set using <a>SetQueueAttributes</a>.</p> <note><p>Use <a>GetQueueUrl</a> to get a queue's URL. <a>GetQueueUrl</a> requires only the <code>QueueName</code> parameter.</p></note> <p>If you provide the name of an existing queue, along with the exact names and values of all the queue's attributes, <code>CreateQueue</code> returns the queue URL for the existing queue. If the queue name, attribute names, or attribute values do not match an existing queue, <code>CreateQueue</code> returns an error.</p> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateQueueAsync(const Model::CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Deletes the specified message from the specified queue. You specify the message by using the message's <code>receipt handle</code> and not the <code>message ID</code> you received when you sent the message. Even if the message is locked by another reader due to the visibility timeout setting, it is still deleted from the queue. If you leave a message in the queue for longer than the queue's configured retention period, Amazon SQS automatically deletes it. </p> <note> <p> The receipt handle is associated with a specific instance of receiving the message. If you receive a message more than once, the receipt handle you get each time you receive the message is different. When you request <code>DeleteMessage</code>, if you don't provide the most recently received receipt handle for the message, the request will still succeed, but the message might not be deleted. </p> </note> <important> <p> It is possible you will receive a message even after you have deleted it. This might happen on rare occasions if one of the servers storing a copy of the message is unavailable when you request to delete the message. The copy remains on the server and might be returned to you again on a subsequent receive request. You should create your system to be idempotent so that receiving a particular message more than once is not a problem. </p> </important>
        */
        Model::DeleteMessageOutcome DeleteMessage(const Model::DeleteMessageRequest& request) const;

        /*
            <p> Deletes the specified message from the specified queue. You specify the message by using the message's <code>receipt handle</code> and not the <code>message ID</code> you received when you sent the message. Even if the message is locked by another reader due to the visibility timeout setting, it is still deleted from the queue. If you leave a message in the queue for longer than the queue's configured retention period, Amazon SQS automatically deletes it. </p> <note> <p> The receipt handle is associated with a specific instance of receiving the message. If you receive a message more than once, the receipt handle you get each time you receive the message is different. When you request <code>DeleteMessage</code>, if you don't provide the most recently received receipt handle for the message, the request will still succeed, but the message might not be deleted. </p> </note> <important> <p> It is possible you will receive a message even after you have deleted it. This might happen on rare occasions if one of the servers storing a copy of the message is unavailable when you request to delete the message. The copy remains on the server and might be returned to you again on a subsequent receive request. You should create your system to be idempotent so that receiving a particular message more than once is not a problem. </p> </important>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteMessageOutcomeCallable DeleteMessageCallable(const Model::DeleteMessageRequest& request) const;

        /*
            <p> Deletes the specified message from the specified queue. You specify the message by using the message's <code>receipt handle</code> and not the <code>message ID</code> you received when you sent the message. Even if the message is locked by another reader due to the visibility timeout setting, it is still deleted from the queue. If you leave a message in the queue for longer than the queue's configured retention period, Amazon SQS automatically deletes it. </p> <note> <p> The receipt handle is associated with a specific instance of receiving the message. If you receive a message more than once, the receipt handle you get each time you receive the message is different. When you request <code>DeleteMessage</code>, if you don't provide the most recently received receipt handle for the message, the request will still succeed, but the message might not be deleted. </p> </note> <important> <p> It is possible you will receive a message even after you have deleted it. This might happen on rare occasions if one of the servers storing a copy of the message is unavailable when you request to delete the message. The copy remains on the server and might be returned to you again on a subsequent receive request. You should create your system to be idempotent so that receiving a particular message more than once is not a problem. </p> </important>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteMessageAsync(const Model::DeleteMessageRequest& request, const DeleteMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes up to ten messages from the specified queue. This is a batch version of <a>DeleteMessage</a>. The result of the delete action on each message is reported individually in the response.</p> <important> <p> Because the batch request can result in a combination of successful and unsuccessful actions, you should check for batch errors even when the call returns an HTTP status code of 200. </p> </important> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>
        */
        Model::DeleteMessageBatchOutcome DeleteMessageBatch(const Model::DeleteMessageBatchRequest& request) const;

        /*
            <p>Deletes up to ten messages from the specified queue. This is a batch version of <a>DeleteMessage</a>. The result of the delete action on each message is reported individually in the response.</p> <important> <p> Because the batch request can result in a combination of successful and unsuccessful actions, you should check for batch errors even when the call returns an HTTP status code of 200. </p> </important> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteMessageBatchOutcomeCallable DeleteMessageBatchCallable(const Model::DeleteMessageBatchRequest& request) const;

        /*
            <p>Deletes up to ten messages from the specified queue. This is a batch version of <a>DeleteMessage</a>. The result of the delete action on each message is reported individually in the response.</p> <important> <p> Because the batch request can result in a combination of successful and unsuccessful actions, you should check for batch errors even when the call returns an HTTP status code of 200. </p> </important> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteMessageBatchAsync(const Model::DeleteMessageBatchRequest& request, const DeleteMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Deletes the queue specified by the <b>queue URL</b>, regardless of whether the queue is empty. If the specified queue does not exist, Amazon SQS returns a successful response. </p> <important> <p> Use <code>DeleteQueue</code> with care; once you delete your queue, any messages in the queue are no longer available. </p> </important> <p> When you delete a queue, the deletion process takes up to 60 seconds. Requests you send involving that queue during the 60 seconds might succeed. For example, a <a>SendMessage</a> request might succeed, but after the 60 seconds, the queue and that message you sent no longer exist. Also, when you delete a queue, you must wait at least 60 seconds before creating a queue with the same name. </p> <p> We reserve the right to delete queues that have had no activity for more than 30 days. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSConcepts.html">How Amazon SQS Queues Work</a> in the <i>Amazon SQS Developer Guide</i>. </p>
        */
        Model::DeleteQueueOutcome DeleteQueue(const Model::DeleteQueueRequest& request) const;

        /*
            <p> Deletes the queue specified by the <b>queue URL</b>, regardless of whether the queue is empty. If the specified queue does not exist, Amazon SQS returns a successful response. </p> <important> <p> Use <code>DeleteQueue</code> with care; once you delete your queue, any messages in the queue are no longer available. </p> </important> <p> When you delete a queue, the deletion process takes up to 60 seconds. Requests you send involving that queue during the 60 seconds might succeed. For example, a <a>SendMessage</a> request might succeed, but after the 60 seconds, the queue and that message you sent no longer exist. Also, when you delete a queue, you must wait at least 60 seconds before creating a queue with the same name. </p> <p> We reserve the right to delete queues that have had no activity for more than 30 days. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSConcepts.html">How Amazon SQS Queues Work</a> in the <i>Amazon SQS Developer Guide</i>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteQueueOutcomeCallable DeleteQueueCallable(const Model::DeleteQueueRequest& request) const;

        /*
            <p> Deletes the queue specified by the <b>queue URL</b>, regardless of whether the queue is empty. If the specified queue does not exist, Amazon SQS returns a successful response. </p> <important> <p> Use <code>DeleteQueue</code> with care; once you delete your queue, any messages in the queue are no longer available. </p> </important> <p> When you delete a queue, the deletion process takes up to 60 seconds. Requests you send involving that queue during the 60 seconds might succeed. For example, a <a>SendMessage</a> request might succeed, but after the 60 seconds, the queue and that message you sent no longer exist. Also, when you delete a queue, you must wait at least 60 seconds before creating a queue with the same name. </p> <p> We reserve the right to delete queues that have had no activity for more than 30 days. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSConcepts.html">How Amazon SQS Queues Work</a> in the <i>Amazon SQS Developer Guide</i>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteQueueAsync(const Model::DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Gets attributes for the specified queue. The following attributes are supported: <ul> <li> <code>All</code> - returns all values.</li> <li> <code>ApproximateNumberOfMessages</code> - returns the approximate number of visible messages in a queue. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>.</li> <li> <code>ApproximateNumberOfMessagesNotVisible</code> - returns the approximate number of messages that are not timed-out and not deleted. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>.</li> <li> <code>VisibilityTimeout</code> - returns the visibility timeout for the queue. For more information about visibility timeout, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</li> <li> <code>CreatedTimestamp</code> - returns the time when the queue was created (epoch time in seconds).</li> <li> <code>LastModifiedTimestamp</code> - returns the time when the queue was last changed (epoch time in seconds).</li> <li> <code>Policy</code> - returns the queue's policy.</li> <li> <code>MaximumMessageSize</code> - returns the limit of how many bytes a message can contain before Amazon SQS rejects it.</li> <li> <code>MessageRetentionPeriod</code> - returns the number of seconds Amazon SQS retains a message.</li> <li> <code>QueueArn</code> - returns the queue's Amazon resource name (ARN).</li> <li> <code>ApproximateNumberOfMessagesDelayed</code> - returns the approximate number of messages that are pending to be added to the queue.</li> <li> <code>DelaySeconds</code> - returns the default delay on the queue in seconds.</li> <li> <code>ReceiveMessageWaitTimeSeconds</code> - returns the time for which a ReceiveMessage call will wait for a message to arrive.</li> <li> <code>RedrivePolicy</code> - returns the parameters for dead letter queue functionality of the source queue. For more information about RedrivePolicy and dead letter queues, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>.</li> </ul> </p> <note>Going forward, new attributes might be added. If you are writing code that calls this action, we recommend that you structure your code so that it can handle new attributes gracefully.</note> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>
        */
        Model::GetQueueAttributesOutcome GetQueueAttributes(const Model::GetQueueAttributesRequest& request) const;

        /*
            <p>Gets attributes for the specified queue. The following attributes are supported: <ul> <li> <code>All</code> - returns all values.</li> <li> <code>ApproximateNumberOfMessages</code> - returns the approximate number of visible messages in a queue. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>.</li> <li> <code>ApproximateNumberOfMessagesNotVisible</code> - returns the approximate number of messages that are not timed-out and not deleted. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>.</li> <li> <code>VisibilityTimeout</code> - returns the visibility timeout for the queue. For more information about visibility timeout, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</li> <li> <code>CreatedTimestamp</code> - returns the time when the queue was created (epoch time in seconds).</li> <li> <code>LastModifiedTimestamp</code> - returns the time when the queue was last changed (epoch time in seconds).</li> <li> <code>Policy</code> - returns the queue's policy.</li> <li> <code>MaximumMessageSize</code> - returns the limit of how many bytes a message can contain before Amazon SQS rejects it.</li> <li> <code>MessageRetentionPeriod</code> - returns the number of seconds Amazon SQS retains a message.</li> <li> <code>QueueArn</code> - returns the queue's Amazon resource name (ARN).</li> <li> <code>ApproximateNumberOfMessagesDelayed</code> - returns the approximate number of messages that are pending to be added to the queue.</li> <li> <code>DelaySeconds</code> - returns the default delay on the queue in seconds.</li> <li> <code>ReceiveMessageWaitTimeSeconds</code> - returns the time for which a ReceiveMessage call will wait for a message to arrive.</li> <li> <code>RedrivePolicy</code> - returns the parameters for dead letter queue functionality of the source queue. For more information about RedrivePolicy and dead letter queues, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>.</li> </ul> </p> <note>Going forward, new attributes might be added. If you are writing code that calls this action, we recommend that you structure your code so that it can handle new attributes gracefully.</note> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetQueueAttributesOutcomeCallable GetQueueAttributesCallable(const Model::GetQueueAttributesRequest& request) const;

        /*
            <p>Gets attributes for the specified queue. The following attributes are supported: <ul> <li> <code>All</code> - returns all values.</li> <li> <code>ApproximateNumberOfMessages</code> - returns the approximate number of visible messages in a queue. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>.</li> <li> <code>ApproximateNumberOfMessagesNotVisible</code> - returns the approximate number of messages that are not timed-out and not deleted. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>.</li> <li> <code>VisibilityTimeout</code> - returns the visibility timeout for the queue. For more information about visibility timeout, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</li> <li> <code>CreatedTimestamp</code> - returns the time when the queue was created (epoch time in seconds).</li> <li> <code>LastModifiedTimestamp</code> - returns the time when the queue was last changed (epoch time in seconds).</li> <li> <code>Policy</code> - returns the queue's policy.</li> <li> <code>MaximumMessageSize</code> - returns the limit of how many bytes a message can contain before Amazon SQS rejects it.</li> <li> <code>MessageRetentionPeriod</code> - returns the number of seconds Amazon SQS retains a message.</li> <li> <code>QueueArn</code> - returns the queue's Amazon resource name (ARN).</li> <li> <code>ApproximateNumberOfMessagesDelayed</code> - returns the approximate number of messages that are pending to be added to the queue.</li> <li> <code>DelaySeconds</code> - returns the default delay on the queue in seconds.</li> <li> <code>ReceiveMessageWaitTimeSeconds</code> - returns the time for which a ReceiveMessage call will wait for a message to arrive.</li> <li> <code>RedrivePolicy</code> - returns the parameters for dead letter queue functionality of the source queue. For more information about RedrivePolicy and dead letter queues, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>.</li> </ul> </p> <note>Going forward, new attributes might be added. If you are writing code that calls this action, we recommend that you structure your code so that it can handle new attributes gracefully.</note> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetQueueAttributesAsync(const Model::GetQueueAttributesRequest& request, const GetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Returns the URL of an existing queue. This action provides a simple way to retrieve the URL of an Amazon SQS queue. </p> <p> To access a queue that belongs to another AWS account, use the <code>QueueOwnerAWSAccountId</code> parameter to specify the account ID of the queue's owner. The queue's owner must grant you permission to access the queue. For more information about shared queue access, see <a>AddPermission</a> or go to <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html">Shared Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
        */
        Model::GetQueueUrlOutcome GetQueueUrl(const Model::GetQueueUrlRequest& request) const;

        /*
            <p> Returns the URL of an existing queue. This action provides a simple way to retrieve the URL of an Amazon SQS queue. </p> <p> To access a queue that belongs to another AWS account, use the <code>QueueOwnerAWSAccountId</code> parameter to specify the account ID of the queue's owner. The queue's owner must grant you permission to access the queue. For more information about shared queue access, see <a>AddPermission</a> or go to <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html">Shared Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetQueueUrlOutcomeCallable GetQueueUrlCallable(const Model::GetQueueUrlRequest& request) const;

        /*
            <p> Returns the URL of an existing queue. This action provides a simple way to retrieve the URL of an Amazon SQS queue. </p> <p> To access a queue that belongs to another AWS account, use the <code>QueueOwnerAWSAccountId</code> parameter to specify the account ID of the queue's owner. The queue's owner must grant you permission to access the queue. For more information about shared queue access, see <a>AddPermission</a> or go to <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html">Shared Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetQueueUrlAsync(const Model::GetQueueUrlRequest& request, const GetQueueUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns a list of your queues that have the RedrivePolicy queue attribute configured with a dead letter queue.</p> <p>For more information about using dead letter queues, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using Amazon SQS Dead Letter Queues</a>.</p>
        */
        Model::ListDeadLetterSourceQueuesOutcome ListDeadLetterSourceQueues(const Model::ListDeadLetterSourceQueuesRequest& request) const;

        /*
            <p>Returns a list of your queues that have the RedrivePolicy queue attribute configured with a dead letter queue.</p> <p>For more information about using dead letter queues, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using Amazon SQS Dead Letter Queues</a>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListDeadLetterSourceQueuesOutcomeCallable ListDeadLetterSourceQueuesCallable(const Model::ListDeadLetterSourceQueuesRequest& request) const;

        /*
            <p>Returns a list of your queues that have the RedrivePolicy queue attribute configured with a dead letter queue.</p> <p>For more information about using dead letter queues, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using Amazon SQS Dead Letter Queues</a>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListDeadLetterSourceQueuesAsync(const Model::ListDeadLetterSourceQueuesRequest& request, const ListDeadLetterSourceQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns a list of your queues. The maximum number of queues that can be returned is 1000. If you specify a value for the optional <code>QueueNamePrefix</code> parameter, only queues with a name beginning with the specified value are returned.</p>
        */
        Model::ListQueuesOutcome ListQueues(const Model::ListQueuesRequest& request) const;

        /*
            <p>Returns a list of your queues. The maximum number of queues that can be returned is 1000. If you specify a value for the optional <code>QueueNamePrefix</code> parameter, only queues with a name beginning with the specified value are returned.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListQueuesOutcomeCallable ListQueuesCallable(const Model::ListQueuesRequest& request) const;

        /*
            <p>Returns a list of your queues. The maximum number of queues that can be returned is 1000. If you specify a value for the optional <code>QueueNamePrefix</code> parameter, only queues with a name beginning with the specified value are returned.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListQueuesAsync(const Model::ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the messages in a queue specified by the <b>queue URL</b>.</p> <important>When you use the <code>PurgeQueue</code> API, the deleted messages in the queue cannot be retrieved.</important> <p>When you purge a queue, the message deletion process takes up to 60 seconds. All messages sent to the queue before calling <code>PurgeQueue</code> will be deleted; messages sent to the queue while it is being purged may be deleted. While the queue is being purged, messages sent to the queue before <code>PurgeQueue</code> was called may be received, but will be deleted within the next minute.</p>
        */
        Model::PurgeQueueOutcome PurgeQueue(const Model::PurgeQueueRequest& request) const;

        /*
            <p>Deletes the messages in a queue specified by the <b>queue URL</b>.</p> <important>When you use the <code>PurgeQueue</code> API, the deleted messages in the queue cannot be retrieved.</important> <p>When you purge a queue, the message deletion process takes up to 60 seconds. All messages sent to the queue before calling <code>PurgeQueue</code> will be deleted; messages sent to the queue while it is being purged may be deleted. While the queue is being purged, messages sent to the queue before <code>PurgeQueue</code> was called may be received, but will be deleted within the next minute.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::PurgeQueueOutcomeCallable PurgeQueueCallable(const Model::PurgeQueueRequest& request) const;

        /*
            <p>Deletes the messages in a queue specified by the <b>queue URL</b>.</p> <important>When you use the <code>PurgeQueue</code> API, the deleted messages in the queue cannot be retrieved.</important> <p>When you purge a queue, the message deletion process takes up to 60 seconds. All messages sent to the queue before calling <code>PurgeQueue</code> will be deleted; messages sent to the queue while it is being purged may be deleted. While the queue is being purged, messages sent to the queue before <code>PurgeQueue</code> was called may be received, but will be deleted within the next minute.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void PurgeQueueAsync(const Model::PurgeQueueRequest& request, const PurgeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Retrieves one or more messages, with a maximum limit of 10 messages, from the specified queue. Long poll support is enabled by using the <code>WaitTimeSeconds</code> parameter. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-long-polling.html">Amazon SQS Long Poll</a> in the <i>Amazon SQS Developer Guide</i>. </p> <p> Short poll is the default behavior where a weighted random set of machines is sampled on a <code>ReceiveMessage</code> call. This means only the messages on the sampled machines are returned. If the number of messages in the queue is small (less than 1000), it is likely you will get fewer messages than you requested per <code>ReceiveMessage</code> call. If the number of messages in the queue is extremely small, you might not receive any messages in a particular <code>ReceiveMessage</code> response; in which case you should repeat the request. </p> <p> For each message returned, the response includes the following: </p> <ul> <li> <p> Message body </p> </li> <li> <p> MD5 digest of the message body. For information about MD5, go to <a href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>. </p> </li> <li> <p> Message ID you received when you sent the message to the queue. </p> </li> <li> <p> Receipt handle. </p> </li> <li> <p> Message attributes. </p> </li> <li> <p> MD5 digest of the message attributes. </p> </li> </ul> <p> The receipt handle is the identifier you must provide when deleting the message. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ImportantIdentifiers.html">Queue and Message Identifiers</a> in the <i>Amazon SQS Developer Guide</i>. </p> <p> You can provide the <code>VisibilityTimeout</code> parameter in your request, which will be applied to the messages that Amazon SQS returns in the response. If you do not include the parameter, the overall visibility timeout for the queue is used for the returned messages. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility Timeout</a> in the <i>Amazon SQS Developer Guide</i>. </p> <note> <p> Going forward, new attributes might be added. If you are writing code that calls this action, we recommend that you structure your code so that it can handle new attributes gracefully. </p> </note>
        */
        Model::ReceiveMessageOutcome ReceiveMessage(const Model::ReceiveMessageRequest& request) const;

        /*
            <p> Retrieves one or more messages, with a maximum limit of 10 messages, from the specified queue. Long poll support is enabled by using the <code>WaitTimeSeconds</code> parameter. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-long-polling.html">Amazon SQS Long Poll</a> in the <i>Amazon SQS Developer Guide</i>. </p> <p> Short poll is the default behavior where a weighted random set of machines is sampled on a <code>ReceiveMessage</code> call. This means only the messages on the sampled machines are returned. If the number of messages in the queue is small (less than 1000), it is likely you will get fewer messages than you requested per <code>ReceiveMessage</code> call. If the number of messages in the queue is extremely small, you might not receive any messages in a particular <code>ReceiveMessage</code> response; in which case you should repeat the request. </p> <p> For each message returned, the response includes the following: </p> <ul> <li> <p> Message body </p> </li> <li> <p> MD5 digest of the message body. For information about MD5, go to <a href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>. </p> </li> <li> <p> Message ID you received when you sent the message to the queue. </p> </li> <li> <p> Receipt handle. </p> </li> <li> <p> Message attributes. </p> </li> <li> <p> MD5 digest of the message attributes. </p> </li> </ul> <p> The receipt handle is the identifier you must provide when deleting the message. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ImportantIdentifiers.html">Queue and Message Identifiers</a> in the <i>Amazon SQS Developer Guide</i>. </p> <p> You can provide the <code>VisibilityTimeout</code> parameter in your request, which will be applied to the messages that Amazon SQS returns in the response. If you do not include the parameter, the overall visibility timeout for the queue is used for the returned messages. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility Timeout</a> in the <i>Amazon SQS Developer Guide</i>. </p> <note> <p> Going forward, new attributes might be added. If you are writing code that calls this action, we recommend that you structure your code so that it can handle new attributes gracefully. </p> </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ReceiveMessageOutcomeCallable ReceiveMessageCallable(const Model::ReceiveMessageRequest& request) const;

        /*
            <p> Retrieves one or more messages, with a maximum limit of 10 messages, from the specified queue. Long poll support is enabled by using the <code>WaitTimeSeconds</code> parameter. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-long-polling.html">Amazon SQS Long Poll</a> in the <i>Amazon SQS Developer Guide</i>. </p> <p> Short poll is the default behavior where a weighted random set of machines is sampled on a <code>ReceiveMessage</code> call. This means only the messages on the sampled machines are returned. If the number of messages in the queue is small (less than 1000), it is likely you will get fewer messages than you requested per <code>ReceiveMessage</code> call. If the number of messages in the queue is extremely small, you might not receive any messages in a particular <code>ReceiveMessage</code> response; in which case you should repeat the request. </p> <p> For each message returned, the response includes the following: </p> <ul> <li> <p> Message body </p> </li> <li> <p> MD5 digest of the message body. For information about MD5, go to <a href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>. </p> </li> <li> <p> Message ID you received when you sent the message to the queue. </p> </li> <li> <p> Receipt handle. </p> </li> <li> <p> Message attributes. </p> </li> <li> <p> MD5 digest of the message attributes. </p> </li> </ul> <p> The receipt handle is the identifier you must provide when deleting the message. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ImportantIdentifiers.html">Queue and Message Identifiers</a> in the <i>Amazon SQS Developer Guide</i>. </p> <p> You can provide the <code>VisibilityTimeout</code> parameter in your request, which will be applied to the messages that Amazon SQS returns in the response. If you do not include the parameter, the overall visibility timeout for the queue is used for the returned messages. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility Timeout</a> in the <i>Amazon SQS Developer Guide</i>. </p> <note> <p> Going forward, new attributes might be added. If you are writing code that calls this action, we recommend that you structure your code so that it can handle new attributes gracefully. </p> </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ReceiveMessageAsync(const Model::ReceiveMessageRequest& request, const ReceiveMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Revokes any permissions in the queue policy that matches the specified <code>Label</code> parameter. Only the owner of the queue can remove permissions.</p>
        */
        Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /*
            <p>Revokes any permissions in the queue policy that matches the specified <code>Label</code> parameter. Only the owner of the queue can remove permissions.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

        /*
            <p>Revokes any permissions in the queue policy that matches the specified <code>Label</code> parameter. Only the owner of the queue can remove permissions.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void RemovePermissionAsync(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Delivers a message to the specified queue. With Amazon SQS, you now have the ability to send large payload messages that are up to 256KB (262,144 bytes) in size. To send large payloads, you must use an AWS SDK that supports SigV4 signing. To verify whether SigV4 is supported for an AWS SDK, check the SDK release notes. </p> <important> <p> The following list shows the characters (in Unicode) allowed in your message, according to the W3C XML specification. For more information, go to <a href="http://www.w3.org/TR/REC-xml/#charsets">http://www.w3.org/TR/REC-xml/#charsets</a> If you send any characters not included in the list, your request will be rejected. </p> <p> #x9 | #xA | #xD | [#x20 to #xD7FF] | [#xE000 to #xFFFD] | [#x10000 to #x10FFFF] </p> </important>
        */
        Model::SendMessageOutcome SendMessage(const Model::SendMessageRequest& request) const;

        /*
            <p> Delivers a message to the specified queue. With Amazon SQS, you now have the ability to send large payload messages that are up to 256KB (262,144 bytes) in size. To send large payloads, you must use an AWS SDK that supports SigV4 signing. To verify whether SigV4 is supported for an AWS SDK, check the SDK release notes. </p> <important> <p> The following list shows the characters (in Unicode) allowed in your message, according to the W3C XML specification. For more information, go to <a href="http://www.w3.org/TR/REC-xml/#charsets">http://www.w3.org/TR/REC-xml/#charsets</a> If you send any characters not included in the list, your request will be rejected. </p> <p> #x9 | #xA | #xD | [#x20 to #xD7FF] | [#xE000 to #xFFFD] | [#x10000 to #x10FFFF] </p> </important>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SendMessageOutcomeCallable SendMessageCallable(const Model::SendMessageRequest& request) const;

        /*
            <p> Delivers a message to the specified queue. With Amazon SQS, you now have the ability to send large payload messages that are up to 256KB (262,144 bytes) in size. To send large payloads, you must use an AWS SDK that supports SigV4 signing. To verify whether SigV4 is supported for an AWS SDK, check the SDK release notes. </p> <important> <p> The following list shows the characters (in Unicode) allowed in your message, according to the W3C XML specification. For more information, go to <a href="http://www.w3.org/TR/REC-xml/#charsets">http://www.w3.org/TR/REC-xml/#charsets</a> If you send any characters not included in the list, your request will be rejected. </p> <p> #x9 | #xA | #xD | [#x20 to #xD7FF] | [#xE000 to #xFFFD] | [#x10000 to #x10FFFF] </p> </important>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SendMessageAsync(const Model::SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Delivers up to ten messages to the specified queue. This is a batch version of <a>SendMessage</a>. The result of the send action on each message is reported individually in the response. The maximum allowed individual message size is 256 KB (262,144 bytes).</p> <p>The maximum total payload size (i.e., the sum of all a batch's individual message lengths) is also 256 KB (262,144 bytes).</p> <p>If the <code>DelaySeconds</code> parameter is not specified for an entry, the default for the queue is used.</p> <important>The following list shows the characters (in Unicode) that are allowed in your message, according to the W3C XML specification. For more information, go to <a href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>. If you send any characters that are not included in the list, your request will be rejected. <p>#x9 | #xA | #xD | [#x20 to #xD7FF] | [#xE000 to #xFFFD] | [#x10000 to #x10FFFF]</p> </important> <important> Because the batch request can result in a combination of successful and unsuccessful actions, you should check for batch errors even when the call returns an HTTP status code of 200. </important> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>
        */
        Model::SendMessageBatchOutcome SendMessageBatch(const Model::SendMessageBatchRequest& request) const;

        /*
            <p>Delivers up to ten messages to the specified queue. This is a batch version of <a>SendMessage</a>. The result of the send action on each message is reported individually in the response. The maximum allowed individual message size is 256 KB (262,144 bytes).</p> <p>The maximum total payload size (i.e., the sum of all a batch's individual message lengths) is also 256 KB (262,144 bytes).</p> <p>If the <code>DelaySeconds</code> parameter is not specified for an entry, the default for the queue is used.</p> <important>The following list shows the characters (in Unicode) that are allowed in your message, according to the W3C XML specification. For more information, go to <a href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>. If you send any characters that are not included in the list, your request will be rejected. <p>#x9 | #xA | #xD | [#x20 to #xD7FF] | [#xE000 to #xFFFD] | [#x10000 to #x10FFFF]</p> </important> <important> Because the batch request can result in a combination of successful and unsuccessful actions, you should check for batch errors even when the call returns an HTTP status code of 200. </important> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SendMessageBatchOutcomeCallable SendMessageBatchCallable(const Model::SendMessageBatchRequest& request) const;

        /*
            <p>Delivers up to ten messages to the specified queue. This is a batch version of <a>SendMessage</a>. The result of the send action on each message is reported individually in the response. The maximum allowed individual message size is 256 KB (262,144 bytes).</p> <p>The maximum total payload size (i.e., the sum of all a batch's individual message lengths) is also 256 KB (262,144 bytes).</p> <p>If the <code>DelaySeconds</code> parameter is not specified for an entry, the default for the queue is used.</p> <important>The following list shows the characters (in Unicode) that are allowed in your message, according to the W3C XML specification. For more information, go to <a href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>. If you send any characters that are not included in the list, your request will be rejected. <p>#x9 | #xA | #xD | [#x20 to #xD7FF] | [#xE000 to #xFFFD] | [#x10000 to #x10FFFF]</p> </important> <important> Because the batch request can result in a combination of successful and unsuccessful actions, you should check for batch errors even when the call returns an HTTP status code of 200. </important> <note>Some API actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like this: </note> <p><code>&amp;Attribute.1=this</code></p> <p><code>&amp;Attribute.2=that</code></p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SendMessageBatchAsync(const Model::SendMessageBatchRequest& request, const SendMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Sets the value of one or more queue attributes. When you change a queue's attributes, the change can take up to 60 seconds for most of the attributes to propagate throughout the SQS system. Changes made to the <code>MessageRetentionPeriod</code> attribute can take up to 15 minutes.</p> <note>Going forward, new attributes might be added. If you are writing code that calls this action, we recommend that you structure your code so that it can handle new attributes gracefully.</note>
        */
        Model::SetQueueAttributesOutcome SetQueueAttributes(const Model::SetQueueAttributesRequest& request) const;

        /*
            <p>Sets the value of one or more queue attributes. When you change a queue's attributes, the change can take up to 60 seconds for most of the attributes to propagate throughout the SQS system. Changes made to the <code>MessageRetentionPeriod</code> attribute can take up to 15 minutes.</p> <note>Going forward, new attributes might be added. If you are writing code that calls this action, we recommend that you structure your code so that it can handle new attributes gracefully.</note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SetQueueAttributesOutcomeCallable SetQueueAttributesCallable(const Model::SetQueueAttributesRequest& request) const;

        /*
            <p>Sets the value of one or more queue attributes. When you change a queue's attributes, the change can take up to 60 seconds for most of the attributes to propagate throughout the SQS system. Changes made to the <code>MessageRetentionPeriod</code> attribute can take up to 15 minutes.</p> <note>Going forward, new attributes might be added. If you are writing code that calls this action, we recommend that you structure your code so that it can handle new attributes gracefully.</note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SetQueueAttributesAsync(const Model::SetQueueAttributesRequest& request, const SetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

/**Async helpers**/
        void AddPermissionAsyncHelper(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ChangeMessageVisibilityAsyncHelper(const Model::ChangeMessageVisibilityRequest& request, const ChangeMessageVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ChangeMessageVisibilityBatchAsyncHelper(const Model::ChangeMessageVisibilityBatchRequest& request, const ChangeMessageVisibilityBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateQueueAsyncHelper(const Model::CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMessageAsyncHelper(const Model::DeleteMessageRequest& request, const DeleteMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMessageBatchAsyncHelper(const Model::DeleteMessageBatchRequest& request, const DeleteMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteQueueAsyncHelper(const Model::DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetQueueAttributesAsyncHelper(const Model::GetQueueAttributesRequest& request, const GetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetQueueUrlAsyncHelper(const Model::GetQueueUrlRequest& request, const GetQueueUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeadLetterSourceQueuesAsyncHelper(const Model::ListDeadLetterSourceQueuesRequest& request, const ListDeadLetterSourceQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListQueuesAsyncHelper(const Model::ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurgeQueueAsyncHelper(const Model::PurgeQueueRequest& request, const PurgeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReceiveMessageAsyncHelper(const Model::ReceiveMessageRequest& request, const ReceiveMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemovePermissionAsyncHelper(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendMessageAsyncHelper(const Model::SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendMessageBatchAsyncHelper(const Model::SendMessageBatchRequest& request, const SendMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetQueueAttributesAsyncHelper(const Model::SetQueueAttributesRequest& request, const SetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace SQS
} // namespace Aws
