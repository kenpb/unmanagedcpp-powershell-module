
namespace cplusplus_powershell_module
{
    [System.Management.Automation.Cmdlet(System.Management.Automation.VerbsCommon.Show, "CplusplusModule")]
    public class Module : System.Management.Automation.PSCmdlet
    {
        protected override void ProcessRecord()
        {
            ManagedWrapper foo = new ManagedWrapper();
            foo.Run();
        }
    }
}
