// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Service Control API (servicecontrol/v1)
// Description:
//   Google Service Control provides control plane functionality to managed
//   services, such as logging, monitoring, and status checks.
// Documentation:
//   https://cloud.google.com/service-control/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRServiceControl_CheckRequest;
@class GTLRServiceControl_ReportRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Service Control query classes.
 */
@interface GTLRServiceControlQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Checks an operation with Google Service Control to decide whether
 *  the given operation should proceed. It should be called before the
 *  operation is executed.
 *  This method requires the `servicemanagement.services.check` permission
 *  on the specified service. For more information, see
 *  [Google Cloud IAM](https://cloud.google.com/iam).
 *
 *  Method: servicecontrol.services.check
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceControl
 *    @c kGTLRAuthScopeServiceControlCloudPlatform
 */
@interface GTLRServiceControlQuery_ServicesCheck : GTLRServiceControlQuery
// Previous library name was
//   +[GTLQueryServiceControl queryForServicesCheckWithObject:serviceName:]

/**
 *  The service name as specified in its service configuration. For example,
 *  `"pubsub.googleapis.com"`.
 *  See google.api.Service for the definition of a service name.
 */
@property(nonatomic, copy, nullable) NSString *serviceName;

/**
 *  Fetches a @c GTLRServiceControl_CheckResponse.
 *
 *  Checks an operation with Google Service Control to decide whether
 *  the given operation should proceed. It should be called before the
 *  operation is executed.
 *  This method requires the `servicemanagement.services.check` permission
 *  on the specified service. For more information, see
 *  [Google Cloud IAM](https://cloud.google.com/iam).
 *
 *  @param object The @c GTLRServiceControl_CheckRequest to include in the
 *    query.
 *  @param serviceName The service name as specified in its service
 *    configuration. For example,
 *    `"pubsub.googleapis.com"`.
 *    See google.api.Service for the definition of a service name.
 *
 *  @returns GTLRServiceControlQuery_ServicesCheck
 */
+ (instancetype)queryWithObject:(GTLRServiceControl_CheckRequest *)object
                    serviceName:(NSString *)serviceName;

@end

/**
 *  Reports operations to Google Service Control. It should be called
 *  after the operation is completed.
 *  This method requires the `servicemanagement.services.report` permission
 *  on the specified service. For more information, see
 *  [Google Cloud IAM](https://cloud.google.com/iam).
 *
 *  Method: servicecontrol.services.report
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceControl
 *    @c kGTLRAuthScopeServiceControlCloudPlatform
 */
@interface GTLRServiceControlQuery_ServicesReport : GTLRServiceControlQuery
// Previous library name was
//   +[GTLQueryServiceControl queryForServicesReportWithObject:serviceName:]

/**
 *  The service name as specified in its service configuration. For example,
 *  `"pubsub.googleapis.com"`.
 *  See google.api.Service for the definition of a service name.
 */
@property(nonatomic, copy, nullable) NSString *serviceName;

/**
 *  Fetches a @c GTLRServiceControl_ReportResponse.
 *
 *  Reports operations to Google Service Control. It should be called
 *  after the operation is completed.
 *  This method requires the `servicemanagement.services.report` permission
 *  on the specified service. For more information, see
 *  [Google Cloud IAM](https://cloud.google.com/iam).
 *
 *  @param object The @c GTLRServiceControl_ReportRequest to include in the
 *    query.
 *  @param serviceName The service name as specified in its service
 *    configuration. For example,
 *    `"pubsub.googleapis.com"`.
 *    See google.api.Service for the definition of a service name.
 *
 *  @returns GTLRServiceControlQuery_ServicesReport
 */
+ (instancetype)queryWithObject:(GTLRServiceControl_ReportRequest *)object
                    serviceName:(NSString *)serviceName;

@end

NS_ASSUME_NONNULL_END
